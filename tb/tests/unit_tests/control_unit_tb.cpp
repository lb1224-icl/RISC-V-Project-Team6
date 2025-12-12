// TOP: control_unit
// RTL: ../../../rtl/cu/control_unit.sv

#include "control_unit_testbench.h"

// Define the ALU Control signal values based on alu_decoder.sv
// 4'b0000: ADD
// 4'b0001: SUB
// 4'b0010: AND
// 4'b0011: OR
// 4'b0100: XOR
// 4'b0101: SLT
// 4'b0110: SLTU
// 4'b0111: SLL
// 4'b1000: SRL
// 4'b1001: SRA
// 4'b1111: LUI (Special)

// Helper function to construct an instruction with funct3/funct7 set
uint32_t make_instr(uint8_t opcode, uint8_t funct3, uint8_t funct7) {
    uint32_t instr = 0;
    instr |= (uint32_t)opcode;         // Bits 6:0
    instr |= (uint32_t)funct3 << 12;   // Bits 14:12
    instr |= (uint32_t)funct7 << 25;   // Bits 31:25
    // rd and rs fields are left at 0 for simplicity because only the control fields matter
    return instr;
}


TEST_F(control_unit_testbench, RType_Standard_Tests) {
    // Opcode 7'd51
    uint8_t opcode = 51; 
    uint8_t funct7_0 = 0; // Standard R-type funct7

    // 1. ADD: funct3=0, funct7_5=0 -> ALU_CTRL=ADD (0)
    check_instruction(make_instr(opcode, 0, funct7_0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 0, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });

    // 2. SUB: funct3=0, funct7_5=1 -> ALU_CTRL=SUB (1)
    check_instruction(make_instr(opcode, 0, 32), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 1, .alu_src = 0, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });

    // 3. OR: funct3=6 (110) -> ALU_CTRL=OR (3)
    check_instruction(make_instr(opcode, 6, funct7_0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 3, .alu_src = 0, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}


TEST_F(control_unit_testbench, MExtension_Tests) {
    // Opcode 7'd51, funct7 = 0b0000001 (1) for M-Extension
    uint8_t opcode = 51;
    uint8_t funct7_m = 1; 

    // M.1. MUL: funct3=0 (Main Dec. alu_op=4, ALU Dec. mul_ctrl=0)
    check_instruction(make_instr(opcode, 0, funct7_m), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 0, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 1, .div_en = 0
    });
    
    // M.2. DIV: funct3=4 (100) (Main Dec. alu_op=5, ALU Dec. div_ctrl=0)
    check_instruction(make_instr(opcode, 4, funct7_m), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 0, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 1
    });

    // M.3. REMU: funct3=7 (111) (Main Dec. alu_op=5, ALU Dec. div_ctrl=3)
    check_instruction(make_instr(opcode, 7, funct7_m), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 0, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 3, .mul_en = 0, .div_en = 1
    });
}


TEST_F(control_unit_testbench, IType_Load_Tests) {
    // Opcode 7'd3 (LW, LH, etc. - funct3 differentiates type)
    uint8_t opcode = 3; 

    // 1. LW (Load Word): funct3=2 (010) -> alu_op=0 (ADD), result_src=1 (Mem)
    check_instruction(make_instr(opcode, 2, 0), {
        .jump_d = 0, .branch_d = 0, .result_src = 1, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 1, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}


TEST_F(control_unit_testbench, IType_Logic_Tests) {
    // Opcode 7'd19 (ADDI, SLLI, etc.)
    uint8_t opcode = 19; 
    
    // 1. ADDI: funct3=0 (000) -> alu_op=2, ALU_CTRL=ADD (0)
    check_instruction(make_instr(opcode, 0, 0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 1, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });

    // 2. SLLI: funct3=1 (001) -> alu_op=2, ALU_CTRL=SLL (7)
    check_instruction(make_instr(opcode, 1, 0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 7, .alu_src = 1, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}


TEST_F(control_unit_testbench, SType_Tests) {
    // Opcode 7'd35 (SW, SH, SB)
    uint8_t opcode = 35; 

    // 1. SW (Store Word): funct3=2 (010) -> alu_op=0 (ADD), mem_write=1, imm_src=1
    check_instruction(make_instr(opcode, 2, 0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 1, 
        .alu_ctrl = 0, .alu_src = 1, .imm_src = 1, .reg_write = 0, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}


TEST_F(control_unit_testbench, BType_Tests) {
    // Opcode 7'd99 (BEQ, BNE, etc.)
    uint8_t opcode = 99; 

    // 1. BEQ (Branch Equal): funct3=0 (000) -> alu_op=1 (SUB), branch_d=1, imm_src=2
    check_instruction(make_instr(opcode, 0, 0), {
        .jump_d = 0, .branch_d = 1, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 1, .alu_src = 0, .imm_src = 2, .reg_write = 0, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 1, .rs2_signal = 1, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}


TEST_F(control_unit_testbench, Jump_Tests) {
    
    // 1. JALR (Opcode 7'd103)
    check_instruction(make_instr(103, 0, 0), {
        .jump_d = 1, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 1, .imm_src = 0, .reg_write = 1, 
        .op1_pc = 0, .jalr = 1, .rs1_signal = 1, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });

    // 2. JAL (Opcode 7'd111)
    check_instruction(make_instr(111, 0, 0), {
        .jump_d = 1, .branch_d = 0, .result_src = 2, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 1, .imm_src = 3, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 0, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}


TEST_F(control_unit_testbench, UType_Tests) {
    
    // 1. LUI (Opcode 7'd55)
    check_instruction(make_instr(55, 0, 0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 15, .alu_src = 1, .imm_src = 4, .reg_write = 1, 
        .op1_pc = 0, .jalr = 0, .rs1_signal = 0, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });

    // 2. AUIPC (Opcode 7'd23)
    check_instruction(make_instr(23, 0, 0), {
        .jump_d = 0, .branch_d = 0, .result_src = 0, .mem_write = 0, 
        .alu_ctrl = 0, .alu_src = 1, .imm_src = 4, .reg_write = 1, 
        .op1_pc = 1, .jalr = 0, .rs1_signal = 0, .rs2_signal = 0, 
        .mul_ctrl = 0, .div_ctrl = 0, .mul_en = 0, .div_en = 0
    });
}