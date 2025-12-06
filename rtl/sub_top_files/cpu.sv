module cpu #(
    parameter WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    output logic [WIDTH-1:0] a0
);

fetch #(.WIDTH(WIDTH)) u_fetch (
    .clk(clk),
    .rst(rst),
    .pc_target_e(),
    .pc_src(),

    .pc_plus_4f(),
    .pc_f(),
    .instr_f()
);

fd_reg #(.WIDTH(WIDTH)) fd_register (
    .clk(clk),
    .flush(),
    .stall(),
    .pc_f(),
    .pc_plus4_f(),
    .instr_f(),

    .pc_d(),
    .pc_plus4_d(),
    .instr_d()
);

decode #(.DATA_WIDTH(WIDTH)) u_decode (
    .clk(clk),
    .zero_e(),
    .reg_write_w(),
    .instr_d(),
    .pc_d_i(),
    .pc_plus4_d_i(),
    .result_w(),
    .rd_w(),

    .reg_write_d(),
    .result_src_d(),
    .mem_write_d(),
    .pc_src(),
    .alu_control_d(),
    .alu_src_d(),
    .rd_1(),
    .rd_2(),
    .pc_d_o(),
    .rd_d(),
    .rs1_d(),
    .rs2_d(),
    .imm_ext_d(),
    .pc_plus_4d_o(),
    .a0(),
    .funct3(),
    .jalr()
    .rs1_used_d(),
    .rs2_used_d()
);

de_reg #(.WIDTH(WIDTH)) de_register (
    .clk(clk),
    .stall(),
    .flush(),
    .reg_write_d(),
    .result_src_d(),
    .mem_write_d(),
    .alu_ctrl_d(),
    .alu_src_d(),
    .funct3_d(),
    .jalr_d(),
    .rs1_used_d(),
    .rs2_used_d(),
    .rd1_d(),
    .rd2_d(),
    .pc_d(),
    .rd_d(),
    .rs1_d(),
    .rs2_d(),
    .imm_ext_d(),
    .pc_plus4_d(),

    .reg_write_e(),
    .result_src_e(),
    .mem_write_e(),
    .alu_ctrl_e(),
    .alu_src_e(),
    .funct3_e(),
    .jalr_e(),
    .rd1_e(),
    .rd2_e(),
    .pc_e(),
    .rd_e(),
    .rs1_e(),
    .rs2_e(),
    .imm_ext_e(),
    .pc_plus4_e()
    .rs1_used_e(),
    .rs2_used_e()
);

execute #(.D_WIDTH(WIDTH)) u_execute (
    .reg_write_e_i(),
    .result_src_e_i(),
    .mem_write_e_i(),
    .alu_ctrl_e(),
    .alu_src_e(),
    .rd1_e(),
    .rd2_e(),
    .pc_e(),
    .rd_e_i(),
    .rs1_e_i(),
    .rs2_e_i(),
    .imm_ext_e(),
    .pc_plus_4e_i(),
    .funct3(),
    .jalr(),
    .result_w(),
    .alu_result_m(),
    .fwd_rs1(),
    .fwd_rs2(),

    .zero_e(),
    .reg_write_e_o(),
    .result_src_e_o(),
    .mem_write_e_o(),
    .alu_result(),
    .write_data_e(),
    .rd_e_o(),
    .rs1_e_o(),
    .rs2_e_o(),
    .pc_plus4_e_o(),
    .pc_target_e()
);

em_reg #(.WIDTH(WIDTH)) em_register (
    .clk(clk),
    .reg_write_e(),
    .result_src_e(),
    .mem_write_e(),
    .alu_result_e(),
    .write_data_e(),
    .rd_e(),
    .pc_plus4_e(),

    .reg_write_m(),
    .result_src_m(),
    .mem_write_m(),
    .alu_result_m(),
    .write_data_m(),
    .rd_m(),
    .pc_plus4_m()
);

memory #(.WIDTH(WIDTH)) u_memory (
    .clk(clk),
    .alu_result_m_i(),
    .write_data_m(),
    .mem_write_m(),
    .reg_write_m_i(),
    .result_src_m_i(),
    .rd_m_i(),
    .pc_plus4_m_i(),
    .fwd_ls_w(),
    .result_w(),

    .read_data(),
    .reg_write_m_o(),
    .result_src_m_o(),
    .rd_m_o(),
    .pc_plus4_m_o(),
    .alu_result_m_o()
);

mw_reg #(.WIDTH(WIDTH)) mw_register (
    .clk(clk),
    .reg_write_m(),
    .result_src_m(),
    .alu_result_m(),
    .read_data_m(),
    .rd_m(),
    .pc_plus4_m(),
    .fwd_ls_hu(),

    .reg_write_w(),
    .result_src_w(),
    .alu_result_w(),
    .read_data_w(),
    .rd_w(),
    .pc_plus4_w(),
    .fwd_ls_w()
);

writeback #(.D_WIDTH(WIDTH)) u_writeback (
    .reg_write_w_i(),
    .result_src_w(),
    .alu_result_w(),
    .read_data_w(),
    .rd_w_i(),
    .pc_plus4_w(),
    .fwd_ls_w_i(),

    .reg_write_w_o(),
    .rd_w_o(),
    .result_w(),
    .fwd_ls_w_o()
);

endmodule
