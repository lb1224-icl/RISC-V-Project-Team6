module execute #(
    parameter D_WIDTH = 32
) (
    input logic                reg_write_e_i,
    input logic [1:0]          result_src_e_i,
    input logic                mem_write_e_i,
    input logic [3:0]          alu_ctrl_e,
    input logic                alu_src_e,
    input logic [D_WIDTH-1:0]  rd1_e,
    input logic [D_WIDTH-1:0]  rd2_e,
    input logic [D_WIDTH-1:0]  pc_e,
    input logic [4:0]          rd_e_i,
    input logic [D_WIDTH-1:0]  imm_ext_e,
    input logic [D_WIDTH-1:0]  pc_plus4_e_i,

    input logic [2:0]          funct3,
    input logic                jalr,

    output logic               zero_e, // eq
    output logic               reg_write_e_o,
    output logic [1:0]         result_src_e_o,
    output logic               mem_write_e_o,
    output logic [D_WIDTH-1:0] alu_result,
    output logic [D_WIDTH-1:0] write_data_e,
    output logic [4:0]         rd_e_o,
    output logic [D_WIDTH-1:0] pc_plus4_e_o,
    output logic [D_WIDTH-1:0] pc_target_e
);

logic [D_WIDTH-1:0] src_b_e;
logic [D_WIDTH-1:0] alu_res;
logic [D_WIDTH-1:0] pc_imm;

assign reg_write_e_o  = reg_write_e_i;
assign result_src_e_o = result_src_e_i;
assign mem_write_e_o  = mem_write_e_i;
assign write_data_e   = rd2_e;
assign rd_e_o         = rd_e_i;
assign pc_plus4_e_o   = pc_plus4_e_i;
assign alu_result     = alu_res;

alu ALU (
    .aluop1    (rd1_e),
    .aluop2    (src_b_e),
    .aluctrl   (alu_ctrl_e),
    .funct3    (funct3),
    .aluout    (alu_res),
    .eq        (zero_e)
);

mux_2 imm_mux (
    .in0       (rd2_e),
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
    .sel       (jalr),
    .out       (pc_target_e)
);

endmodule
