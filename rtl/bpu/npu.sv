module npu #(
    parameter WIDTH = 32
) (
    input  logic [WIDTH-1:0] pc_circuit,
    input  logic             flush,
    input  logic [WIDTH-1:0] pc_tu,
    input  logic             branch_en,
    input  logic [WIDTH-1:0] pc_target,
    output logic [WIDTH-1:0] pc_next,
    output logic             branch_predicted
);

logic [WIDTH-1:0] pc_branch_en;
logic [WIDTH-1:0] pc_tu_p4;

mux_2 #(.WIDTH(WIDTH)) pc_from_TUU_mux (
    .in0(pc_circuit),
    .in1(pc_target),
    .sel(branch_en),
    .out(pc_branch_en)
);

pc_inc #(.WIDTH(WIDTH)) u_pc_inc (
    .pc     (pc_tu),
    .inc_pc (pc_tu_p4)
);

mux_2 #(.WIDTH(WIDTH)) pc_out_mux (
    .in0(pc_branch_en),
    .in1(pc_tu_p4),
    .sel(flush),
    .out(pc_next)
);

always_comb begin
    branch_predicted = ((branch_en)&&(pc_next == pc_target));
end

endmodule
