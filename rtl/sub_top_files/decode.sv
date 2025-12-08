module decode #(
    DATA_WIDTH = 32
) (
    input  logic                  clk,
    input  logic                  reg_write_w,
    input  logic [DATA_WIDTH-1:0] instr_d,
    input  logic [DATA_WIDTH-1:0] result_w,
    input  logic [4:0]            rd_w,

    output logic                  reg_write_d,
    output logic [1:0]            result_src_d,
    output logic                  mem_write_d,
    output logic                  jump_d,
    output logic                  branch_d,
    output logic [3:0]            alu_control_d,
    output logic                  alu_src_d,
    output logic [DATA_WIDTH-1:0] rd1_d,
    output logic [DATA_WIDTH-1:0] rd2_d,
    output logic [4:0]            rd_d,
    output logic [4:0]            rs1_d,
    output logic [4:0]            rs2_d,
    output logic [DATA_WIDTH-1:0] imm_ext_d,
    output logic [DATA_WIDTH-1:0] a0,

    output logic [2:0]            funct3_d,
    output logic                  jalr_d,
    output logic                  op1_pc_d,

    output logic                  rs1_used_d,
    output logic                  rs2_used_d
);

// datapaths that just pass through
assign rd_d  = instr_d[11:7];
assign rs1_d = instr_d[19:15];
assign rs2_d = instr_d[24:20];

// internal logic
logic [2:0] imm_src_d;

control_unit cu (     
    .ins        (instr_d),
    .jump_d     (jump_d),
    .branch_d   (branch_d),     
    .result_src (result_src_d),   
    .mem_write  (mem_write_d),   
    .alu_ctrl   (alu_control_d), 
    .alu_src    (alu_src_d),     
    .imm_src    (imm_src_d),      
    .reg_write  (reg_write_d),
    .op1_pc     (op1_pc_d),
    .funct3     (funct3_d),
    .jalr       (jalr_d),
    .rs1_signal (rs1_used_d),
    .rs2_signal (rs2_used_d)
);

 reg_file rf (     
    .clk        (clk),
    .wr_en      (reg_write_w),
    .a3         (rd_w),
    .a1         (instr_d[19:15]),
    .a2         (instr_d[24:20]),
    .din        (result_w),
    .dout1      (rd1_d),
    .dout2      (rd2_d),
    .a0         (a0)
);

sign_extend se (     
    .imm_src    (imm_src_d),
    .ins        (instr_d),
    .imm_op     (imm_ext_d) 
);
    
endmodule
