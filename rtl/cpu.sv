module cpu #(
    parameter WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    input  logic trigger,
    output logic [WIDTH-1:0] a0
);

// trigger is unused but kept for compatibility with the testbench
logic  unused_trigger;
assign unused_trigger = trigger;

logic [WIDTH-1:0] pc_target_e;
logic             pc_src_e;
logic [WIDTH-1:0] pc_plus4_f;
logic [WIDTH-1:0] pc_f;
logic [WIDTH-1:0] instr_f;

logic [WIDTH-1:0] pc_d;
logic [WIDTH-1:0] pc_plus4_d;
logic [WIDTH-1:0] instr_d;

logic             reg_write_w;
logic [WIDTH-1:0] result_w;
logic [4:0]       rd_w;
logic             reg_write_d;
logic [1:0]       result_src_d;
logic             mem_write_d;
logic             jump_d;
logic             branch_d;
logic [3:0]       alu_ctrl_d;
logic             alu_src_d;
logic [WIDTH-1:0] rd1_d;
logic [WIDTH-1:0] rd2_d;
logic [4:0]       rd_d;
logic [4:0]       rs1_d;
logic [4:0]       rs2_d;
logic [WIDTH-1:0] imm_ext_d;
logic [2:0]       funct3_d;
logic             jalr_d;
logic             op1_pc_d;
logic             rs1_used_d;
logic             rs2_used_d;

logic             reg_write_e;
logic [1:0]       result_src_e;
logic             mem_write_e;
logic             jump_e;
logic             branch_e;
logic [3:0]       alu_ctrl_e;
logic             alu_src_e;
logic [2:0]       funct3_e;
logic             jalr_e;
logic             op1_pc_e;
logic [WIDTH-1:0] rd1_e;
logic [WIDTH-1:0] rd2_e;
logic [WIDTH-1:0] pc_e;
logic [4:0]       rd_e;
logic [4:0]       rs1_e;
logic [4:0]       rs2_e;
logic [WIDTH-1:0] imm_ext_e;
logic [WIDTH-1:0] pc_plus4_e;
logic             rs1_used_e;
logic             rs2_used_e;

logic [WIDTH-1:0] alu_result_m;
logic [1:0]       fwd_rs1;
logic [1:0]       fwd_rs2;
logic [WIDTH-1:0] alu_result_e;
logic [WIDTH-1:0] write_data_e;

logic             reg_write_m;
logic [1:0]       result_src_m;
logic             mem_write_m;
logic [WIDTH-1:0] write_data_m;
logic [4:0]       rd_m;
logic [WIDTH-1:0] pc_plus4_m;
logic [2:0]       funct3_m;

logic [WIDTH-1:0] read_data_m;

logic [1:0]       result_src_w;
logic [WIDTH-1:0] alu_result_w;
logic [WIDTH-1:0] read_data_w;
logic [WIDTH-1:0] pc_plus4_w;

logic             stall;
logic             flush;

// default to using register operand for aluop1 unless explicitly overridden
assign op1_pc_e = 1'b0;

fetch #(.WIDTH(WIDTH)) u_fetch (
    .clk           (clk),
    .rst           (rst),
    .stall         (stall),
    .pc_target_e   (pc_target_e),
    .pc_src_e      (pc_src_e),

    .pc_plus4_f    (pc_plus4_f),
    .pc_f          (pc_f),
    .instr_f       (instr_f)
);

fd_reg #(.WIDTH(WIDTH)) fd_register (
    .clk           (clk),
    .rst           (rst),
    .flush         (flush),
    .stall         (stall),
    .pc_f          (pc_f),
    .pc_plus4_f    (pc_plus4_f),
    .instr_f       (instr_f),

    .pc_d          (pc_d),
    .pc_plus4_d    (pc_plus4_d),
    .instr_d       (instr_d)
);

decode #(.DATA_WIDTH(WIDTH)) u_decode (
    .clk           (clk),
    .reg_write_w   (reg_write_w),
    .instr_d       (instr_d),
    .result_w      (result_w),
    .rd_w          (rd_w),

    .reg_write_d   (reg_write_d),
    .result_src_d  (result_src_d),
    .mem_write_d   (mem_write_d),
    .jump_d        (jump_d),
    .branch_d      (branch_d),
    .alu_control_d (alu_ctrl_d),
    .alu_src_d     (alu_src_d),
    .rd1_d         (rd1_d),
    .rd2_d         (rd2_d),
    .rd_d          (rd_d),
    .rs1_d         (rs1_d),
    .rs2_d         (rs2_d),
    .imm_ext_d     (imm_ext_d),
    .a0            (a0),
    .funct3_d      (funct3_d),
    .jalr_d        (jalr_d),
    .op1_pc_d      (op1_pc_d),
    .rs1_used_d    (rs1_used_d),
    .rs2_used_d    (rs2_used_d)
);

de_reg #(.WIDTH(WIDTH)) de_register (
    .clk           (clk),
    .rst           (rst),
    .stall         (stall),
    .flush         (flush),
    .reg_write_d   (reg_write_d),
    .result_src_d  (result_src_d),
    .mem_write_d   (mem_write_d),
    .jump_d        (jump_d),
    .branch_d      (branch_d),
    .alu_ctrl_d    (alu_ctrl_d),
    .alu_src_d     (alu_src_d),
    .funct3_d      (funct3_d),
    .jalr_d        (jalr_d),
    .op1_pc_d      (op1_pc_d),
    .rs1_used_d    (rs1_used_d),
    .rs2_used_d    (rs2_used_d),
    .rd1_d         (rd1_d),
    .rd2_d         (rd2_d),
    .pc_d          (pc_d),
    .rd_d          (rd_d),
    .rs1_d         (rs1_d),
    .rs2_d         (rs2_d),
    .imm_ext_d     (imm_ext_d),
    .pc_plus4_d    (pc_plus4_d),

    .reg_write_e   (reg_write_e),
    .result_src_e  (result_src_e),
    .mem_write_e   (mem_write_e),
    .jump_e        (jump_e),
    .branch_e      (branch_e),
    .alu_ctrl_e    (alu_ctrl_e),
    .alu_src_e     (alu_src_e),
    .funct3_e      (funct3_e),
    .jalr_e        (jalr_e),
    .op1_pc_e      (op1_pc_e),
    .rd1_e         (rd1_e),
    .rd2_e         (rd2_e),
    .pc_e          (pc_e),
    .rd_e          (rd_e),
    .rs1_e         (rs1_e),
    .rs2_e         (rs2_e),
    .imm_ext_e     (imm_ext_e),
    .pc_plus4_e    (pc_plus4_e),
    .rs1_used_e    (rs1_used_e),
    .rs2_used_e    (rs2_used_e)
);

execute #(.D_WIDTH(WIDTH)) u_execute (
    .alu_ctrl_e    (alu_ctrl_e),
    .alu_src_e     (alu_src_e),
    .rd1_e         (rd1_e),
    .rd2_e         (rd2_e),
    .pc_e          (pc_e),
    .imm_ext_e     (imm_ext_e),
    .jump_e        (jump_e),
    .branch_e      (branch_e),
    .funct3_e      (funct3_e),
    .jalr_e        (jalr_e),
    .op1_pc_e      (op1_pc_e),
    .result_w      (result_w),
    .alu_result_m  (alu_result_m),
    .fwd_rs1       (fwd_rs1),
    .fwd_rs2       (fwd_rs2),
    .rs1_used_e    (rs1_used_e),
    .rs2_used_e    (rs2_used_e),

    .pc_src_e      (pc_src_e),
    .alu_result_e  (alu_result_e),
    .write_data_e  (write_data_e),
    .pc_target_e   (pc_target_e)
);

em_reg #(.WIDTH(WIDTH)) em_register (
    .clk           (clk),
    .rst           (rst),
    .reg_write_e   (reg_write_e),
    .result_src_e  (result_src_e),
    .mem_write_e   (mem_write_e),
    .alu_result_e  (alu_result_e),
    .write_data_e  (write_data_e),
    .rd_e          (rd_e),
    .pc_plus4_e    (pc_plus4_e),
    .funct3_e      (funct3_e),

    .reg_write_m   (reg_write_m),
    .result_src_m  (result_src_m),
    .mem_write_m   (mem_write_m),
    .alu_result_m  (alu_result_m),
    .write_data_m  (write_data_m),
    .rd_m          (rd_m),
    .pc_plus4_m    (pc_plus4_m),
    .funct3_m      (funct3_m)
);

memory #(.WIDTH(WIDTH)) u_memory (
    .clk           (clk),
    .alu_result_m  (alu_result_m),
    .write_data_m  (write_data_m),
    .mem_write_m   (mem_write_m),
    .funct3_m      (funct3_m),

    .read_data_m   (read_data_m)
);

mw_reg #(.WIDTH(WIDTH)) mw_register (
    .clk           (clk),
    .rst           (rst),
    .reg_write_m   (reg_write_m),
    .result_src_m  (result_src_m),
    .alu_result_m  (alu_result_m),
    .read_data_m   (read_data_m),
    .rd_m          (rd_m),
    .pc_plus4_m    (pc_plus4_m),

    .reg_write_w   (reg_write_w),
    .result_src_w  (result_src_w),
    .alu_result_w  (alu_result_w),
    .read_data_w   (read_data_w),
    .rd_w          (rd_w),
    .pc_plus4_w    (pc_plus4_w)
);

writeback #(.D_WIDTH(WIDTH)) u_writeback (
    .result_src_w  (result_src_w),
    .alu_result_w  (alu_result_w),
    .read_data_w   (read_data_w),
    .pc_plus4_w    (pc_plus4_w),

    .result_w      (result_w)
);

hazard_unit hu (
    .rd_e          (rd_e),
    .rd_m          (rd_m),
    .rd_w          (rd_w),
    .rs1_d         (rs1_d),
    .rs2_d         (rs2_d),
    .rs1_e         (rs1_e),
    .rs2_e         (rs2_e),
    .rs1_used_d    (rs1_used_d),
    .rs2_used_d    (rs2_used_d),
    .rs1_used_e    (rs1_used_e),
    .rs2_used_e    (rs2_used_e),
    .reg_write_m   (reg_write_m),
    .reg_write_w   (reg_write_w),
    .load_e        (result_src_e == 2'b01),
    .branch_taken  (pc_src_e),

    .stall         (stall),
    .flush         (flush),
    .fwd_rs1       (fwd_rs1),
    .fwd_rs2       (fwd_rs2)
);

endmodule
