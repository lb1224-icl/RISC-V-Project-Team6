module execute #(
    parameter D_WIDTH = 32
) (
    input logic [3:0]          alu_ctrl_e,
    input logic                alu_src_e,
    input logic [D_WIDTH-1:0]  rd1_e,
    input logic [D_WIDTH-1:0]  rd2_e,
    input logic [D_WIDTH-1:0]  pc_e,
    input logic [D_WIDTH-1:0]  imm_ext_e,
    input logic                jump_e,
    input logic                branch_e,

    input logic [2:0]          funct3_e,
    input logic                jalr_e,
    input logic                op1_pc_e,

    // forwarding inputs
    input logic [D_WIDTH-1:0]  result_w,
    input logic [D_WIDTH-1:0]  alu_result_m,
    input logic [1:0]          fwd_rs1,
    input logic [1:0]          fwd_rs2,

    input logic [1:0]          mul_ctrl_e,
    input logic [1:0]          div_ctrl_e,
    input logic                mul_en_e,
    input logic                div_en_e,

    output logic               pc_src_e,
    output logic [D_WIDTH-1:0] alu_result_e,
    output logic [D_WIDTH-1:0] write_data_e,
    output logic [D_WIDTH-1:0] pc_target_e,

    output logic               div_done_e
);

logic               zero_e;
logic [D_WIDTH-1:0] src_a_e;
logic [D_WIDTH-1:0] src_b_e;
logic [D_WIDTH-1:0] alu_res;
logic [D_WIDTH-1:0] pc_imm;
logic [D_WIDTH-1:0] fwd_aluop1_raw;
logic [D_WIDTH-1:0] fwd_aluop2_out;

logic [D_WIDTH-1:0] mul_out_e;
logic [D_WIDTH-1:0] div_out_e;

assign pc_src_e     = jump_e | (zero_e & branch_e);
assign write_data_e = fwd_aluop2_out;
assign alu_result_e = mda_out;

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
    .out       (fwd_aluop1_raw)
);

mux_4 fwd_aluop2 (
    .in0       (rd2_e),
    .in1       (result_w),
    .in2       (alu_result_m),
    .in3       (32'b0),
    .sel       (fwd_rs2),
    .out       (fwd_aluop2_out)
);

mul multiplier (
    .rd1(rd1_e),
    .rd2(rd2_e),
    .mul_ctrl(mul_ctrl_e),
    .result(mul_out_e)
);

div divider (
    .clk(clk),
    .start(div_en_e),
    .div_ctrl(div_ctrl_e),
    .numerator(rd1_e),
    .denominator(rd2_e),
    .result(div_out_e),
    .division_done(div_done_e)
);

mux_4 mul_div_alu (
    .in0(alu_res),
    .in1(mul_out_e),
    .in2(div_out_e),
    .in3(32'b0),
    .sel({div_en_e, mul_en_e}),
    .out(mda_out)
);

// select operand sources: allow PC or zero when registers are unused
assign src_a_e = op1_pc_e ? pc_e : fwd_aluop1_raw;

endmodule
