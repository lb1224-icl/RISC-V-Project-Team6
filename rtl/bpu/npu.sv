module npu #(
    parameter WIDTH = 32
) (
    input  logic [WIDTH-1:0] pc_circuit,
    input  logic [WIDTH-1:0] pc_fetch,
    input  logic             flush,
    input  logic [WIDTH-1:0] pc_tu,
    input  logic             branch_en,
    input  logic [WIDTH-1:0] pc_target,
    output logic [WIDTH-1:0] pc_next,
    output logic             branch_predicted
);

logic [WIDTH-1:0] pc_branch_en;
logic [WIDTH-1:0] pc_fetch_p4;

pc_inc #(.WIDTH(WIDTH)) u_pc_fetch_inc (
    .pc     (pc_fetch),
    .inc_pc (pc_fetch_p4)
);

// When branch_en=0 (miss), use pc_fetch_p4 (sequential PC for current instruction)
// When branch_en=1 (hit), use pc_target (predicted target)
mux_2 #(.D_WIDTH(WIDTH)) pc_from_TUU_mux (
    .in0(pc_fetch_p4),
    .in1(pc_target),
    .sel(branch_en),
    .out(pc_branch_en)
);

// When flushing, always use pc_circuit which has the correct next PC:
// - For jumps (JAL/JALR): pc_circuit contains the jump target
// - For branches: pc_circuit contains either branch target (if taken) or PC+4 (if not taken)
// pc_circuit is computed in fetch stage based on pc_src_e from execute stage

mux_2 #(.D_WIDTH(WIDTH)) pc_out_mux (
    .in0(pc_branch_en),
    .in1(pc_circuit),
    .sel(flush),
    .out(pc_next)
);

always_comb begin
    // branch_predicted indicates whether we predicted a branch/jump
    // branch_en already indicates this, so use it directly
    branch_predicted = branch_en;
end

endmodule
