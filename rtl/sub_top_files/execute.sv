module execute #(
    parameter D_WIDTH = 32
) (
    input logic [3:0]          alu_ctrl_e,
    input logic                alu_src_e,
    input logic [D_WIDTH-1:0]  rd1_e,
    input logic [D_WIDTH-1:0]  rd2_e,
    input logic [D_WIDTH-1:0]  pc_e,
    input logic [D_WIDTH-1:0]  imm_ext_e,

    input logic [2:0]          funct3_e,
    input logic                jalr_e,

    // forwarding inputs
    input logic [D_WIDTH-1:0]  result_w,
    input logic [D_WIDTH-1:0]  alu_result_m,
    input logic [1:0]          fwd_rs1,
    input logic [1:0]          fwd_rs2,

    output logic               zero_e, // eq
    output logic [D_WIDTH-1:0] alu_result_e,
    output logic [D_WIDTH-1:0] write_data_e,
    output logic [D_WIDTH-1:0] pc_target_e
);

logic [D_WIDTH-1:0] src_a_e;
logic [D_WIDTH-1:0] src_b_e;
logic [D_WIDTH-1:0] alu_res;
logic [D_WIDTH-1:0] pc_imm;
logic [D_WIDTH-1:0] fwd_aluop2_out;

assign write_data_e   = fwd_aluop2_out;
assign alu_result_e   = alu_res;

alu ALU (
    .aluop1    (src_a_e),
    .aluop2    (src_b_e),
    .aluctrl   (alu_ctrl_e),
    .funct3    (funct3_e),
    .aluout    (alu_res),
    .eq        (zero_e)
);

mux_2 imm_mux (
    .in0       (fwd_aluop2_out),
    .in1       (imm_ext_e),
    .sel       (alu_src_e),
    .out       (src_b_e)
);

pc_branch #(.WIDTH(D_WIDTH)) u_branch (
    .pc        (pc_e),
    .imm       (imm_ext_e),
    .branch_pc (pc_imm)
);

mux_2 pc_mux (
    .in0       (pc_imm),
    .in1       (alu_res),
    .sel       (jalr_e),
    .out       (pc_target_e)
);

mux_4 fwd_aluop1 (
    .in0       (rd1_e),
    .in1       (result_w),
    .in2       (alu_result_m),
    .in3       (32'b0),
    .sel       (fwd_rs1),
    .out       (src_a_e)
);

mux_4 fwd_aluop2 (
    .in0       (rd2_e),
    .in1       (result_w),
    .in2       (alu_result_m),
    .in3       (32'b0),
    .sel       (fwd_rs2),
    .out       (fwd_aloup2_out)
);

endmodule
