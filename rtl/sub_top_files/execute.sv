module execute #(
    parameter D_WIDTH = 32
) (
    input logic [D_WIDTH-1:0] rd1,
    input logic [D_WIDTH-1:0] rd2,
    input logic [D_WIDTH-1:0] pc,
    input logic [D_WIDTH-1:0] imm_Ext,
    input logic [2:0] alu_ctrl,
    input logic alu_src,
    output logic [D_WIDTH-1:0] alu_result,
    output logic zero, //eq
    output logic [D_WIDTH-1:0] write_data,
    output logic [D_WIDTH-1:0] pc_target
);

logic [D_WIDTH-1:0] src_b;

alu ALU (
    .aluop1(rd1),
    .aluop2(src_b),
    .aluctrl(alu_ctrl),
    .aluout(alu_result),
    .eq(zero)
);

mux_2 imm_mux (
    .in0(rd2),
    .in1(imm_Ext),
    .sel(alu_src),
    .out(src_b)
);

pc_branch #(.WIDTH(D_WIDTH)) u_branch (
    .pc(pc),
    .imm(imm_Ext),
    .branch_pc(pc_target)
);


assign write_data = rd2;

endmodule
