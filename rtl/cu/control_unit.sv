module control_unit #(
    WIDTH = 32
) (
    input logic  [WIDTH-1:0]  ins,        // entire instruction to decode
    output logic              jump_d,     // pc jumps or not
    output logic              branch_d,   // pc branches or not
    output logic [1:0]        result_src, // whether we are taking the ALU result,  data memory or PC next
    output logic              mem_write,  // write enable for data memory
    output logic [3:0]        alu_ctrl,   // ALU operation: add, sub, OR...
    output logic              alu_src,    // whether 2nd ALU input is a register data or immediate
    output logic [2:0]        imm_src,    // type of ins: R, I, S, B...
    output logic              reg_write,  // register write enable
    // feed to alu
    output logic [2:0]        funct3,     // neccessary logic for branching to differentiate between bne beq...
    output logic              jalr,       // neccessary logic for jumps to differentiate between jalr and jal
    // feed to hazard unit
    output logic              rs1_signal,
    output logic              rs2_signal 
);

logic [6:0]     opcode;
logic [6:0]     funct7;
logic [2:0]     alu_logic;

assign opcode = ins[6:0];
assign funct7 = ins[31:25];
assign funct3 = ins[14:12];


main_decoder decoder_1 (    
    .opcode     (opcode),
    .eq         (eq),
    .pc_src     (pc_src),      
    .result_src (result_src),   
    .mem_write  (mem_write),   
    .alu_src    (alu_src),     
    .imm_src    (imm_src),      
    .reg_write  (reg_write),    
    .alu_op     (alu_logic),
    .jalr       (jalr),
    .rs1_signal (rs1_signal),
    .rs2_signal (rs2_signal)
);

alu_decoder decoder_2 (
    .alu_op      (alu_logic),
    .opcode_5    (opcode[5]),
    .funct3      (funct3),
    .funct7_5    (funct7[5]),
    .alu_ctrl    (alu_ctrl)
);

endmodule 
