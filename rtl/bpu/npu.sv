module npu #(
    parameter WIDTH = 32
) (
    input  logic [WIDTH-1:0] pc_circuit,
    input  logic [WIDTH-1:0] pc_fetch,
    input  logic             flush,
    input  logic [WIDTH-1:0] pc_tu,
    input  logic [WIDTH-1:0] pcplusimm_tu,  // Target from execute stage
    input  logic             branch_en,
    input  logic [WIDTH-1:0] pc_target,
    output logic [WIDTH-1:0] pc_next,
    output logic             branch_predicted
);

logic [WIDTH-1:0] pc_branch_en;
logic [WIDTH-1:0] pc_fetch_p4;
logic [WIDTH-1:0] pc_tu_p4;
logic [WIDTH-1:0] pc_flush;

pc_inc #(.WIDTH(WIDTH)) u_pc_fetch_inc (
    .pc     (pc_fetch),
    .inc_pc (pc_fetch_p4)
);

pc_inc #(.WIDTH(WIDTH)) u_pc_tu_inc (
    .pc     (pc_tu),
    .inc_pc (pc_tu_p4)
);

// When branch_en=0 (miss), use pc_fetch_p4 (sequential PC for current instruction)
// When branch_en=1 (hit), use pc_target (predicted target)
mux_2 #(.D_WIDTH(WIDTH)) pc_from_TUU_mux (
    .in0(pc_fetch_p4),
    .in1(pc_target),
    .sel(branch_en),
    .out(pc_branch_en)
);

// When flushing, we need the correct next PC for the instruction in execute stage.
// pc_circuit is computed in fetch stage as: pc_src_e ? pc_target_e : pc_plus4
// where pc_plus4 = pc_f + 4 (fetch PC + 4).
// For jumps and branches taken: pc_circuit = pc_target_e (correct)
// For branches not taken: pc_circuit = pc_plus4 = pc_f + 4 (WRONG! should be pc_e + 4)
// Since pc_tu is pc_e (execute stage PC), we should use pc_tu + 4 for branches not taken.
// If pc_circuit == pc_fetch_p4, it means it's using sequential path, which is wrong
// for a flush (we want pc_e + 4, not pc_f + 4). So use pc_tu + 4 in that case.
// Otherwise, use pc_circuit (which is correct for jumps/branches taken) or pcplusimm_tu.
logic use_pc_tu_p4;
assign use_pc_tu_p4 = (pc_circuit == pc_fetch_p4) || (pc_circuit == 0);
assign pc_flush = use_pc_tu_p4 ? pc_tu_p4 : 
                  ((pcplusimm_tu != 0 && pcplusimm_tu != pc_tu_p4) ? pcplusimm_tu : pc_circuit);

mux_2 #(.D_WIDTH(WIDTH)) pc_out_mux (
    .in0(pc_branch_en),
    .in1(pc_flush),
    .sel(flush),
    .out(pc_next)
);

always_comb begin
    // branch_predicted indicates whether we predicted a branch/jump
    // branch_en already indicates this, so use it directly
    branch_predicted = branch_en;
end

endmodule
