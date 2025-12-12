// TOP: alu
// RTL: ../../rtl/alu/alu.sv

#include "alu_testbench.h"

// Define Control Codes (from alu.sv)
enum {
    ALU_ADD = 0x0,
    ALU_SUB = 0x1,
    ALU_OR = 0x3,
    ALU_AND = 0x2,
    ALU_XOR = 0x4,
    ALU_SLT = 0x5,
    ALU_SLTU = 0x6,
    ALU_SLL = 0x7,
    ALU_SRL = 0x8,
    ALU_SRA = 0x9,
    ALU_LUI = 0xF
};

// Define Funct3 Codes (from alu.sv)
enum {
    BR_EQ = 0x0,
    BR_NE = 0x1,
    BR_LT = 0x4, // Signed Less Than
    BR_GE = 0x5, // Signed Greater or Equal
    BR_LTU = 0x6, // Unsigned Less Than
    BR_GEU = 0x7  // Unsigned Greater or Equal
};


TEST_F(alu_testbench, Arithmetic_Tests) {
    // 1. ADD (0x0)
    check_op(10, 5, ALU_ADD, BR_EQ, {.aluout = 15, .eq = false}); //  eq should always be false for these ADD instr
    check_op(0xFFFFFFF0, 0x10, ALU_ADD, BR_EQ, {.aluout = 0, .eq = false}); // -16 + 16 = 0  

    // 2. SUB (0x1)
    check_op(10, 5, ALU_SUB, BR_EQ, {.aluout = 5, .eq = false});
    check_op(5, 5, ALU_SUB, BR_EQ, {.aluout = 0, .eq = true});
}

TEST_F(alu_testbench, Logic_Tests) {
    const uint32_t A = 0xDEADBEEF;
    const uint32_t B = 0xFEEDFACE;

    // 1. OR (0x3)
    check_op(A, B, ALU_OR, BR_EQ, {.aluout = A | B, .eq = false});
    
    // 2. AND (0x2)
    check_op(A, B, ALU_AND, BR_EQ, {.aluout = A & B, .eq = false});
    
    // 3. XOR (0x4)
    check_op(A, B, ALU_XOR, BR_EQ, {.aluout = A ^ B, .eq = false});
    
    // 4. LUI/PASS (0xF)
    check_op(A, B, ALU_LUI, BR_EQ, {.aluout = B, .eq = false});
}

TEST_F(alu_testbench, Shift_Tests) {
    const uint32_t NEG_ONE = 0xFFFFFFFF;
    const uint32_t POS_VAL = 0x80000000; // MSB is 1, but treated as unsigned if not SRA

    // 1. SLL (0x7)
    check_op(1, 4, ALU_SLL, BR_EQ, {.aluout = 16, .eq = false});
    
    // 2. SRL (0x8) - Logical shift: MSB becomes 0
    check_op(POS_VAL, 1, ALU_SRL, BR_EQ, {.aluout = 0x40000000, .eq = false}); 
    
    // 3. SRA (0x9) - Arithmetic shift: MSB (sign bit) is preserved
    check_op(NEG_ONE, 1, ALU_SRA, BR_EQ, {.aluout = NEG_ONE, .eq = false}); // -1 shifted remains -1
    check_op(0x80000000, 1, ALU_SRA, BR_EQ, {.aluout = 0xC0000000, .eq = false}); // 1000... shifted is 1100...
}

TEST_F(alu_testbench, Set_Less_Than_Tests) {
    const uint32_t POS_ONE = 1;
    const uint32_t NEG_ONE = 0xFFFFFFFF;

    // 1. SLT (0x5) - Signed: 1 if A < B
    check_op(POS_ONE, NEG_ONE, ALU_SLT, BR_EQ, {.aluout = 0, .eq = false}); // 1 is NOT < -1 (signed)
    check_op(NEG_ONE, POS_ONE, ALU_SLT, BR_EQ, {.aluout = 1, .eq = false}); // -1 IS < 1 (signed)
    
    // 2. SLTU (0x6) - Unsigned: 1 if A < B
    check_op(POS_ONE, NEG_ONE, ALU_SLTU, BR_EQ, {.aluout = 1, .eq = false}); // 1 IS < 0xFFFFFFFF (unsigned)
    check_op(NEG_ONE, POS_ONE, ALU_SLTU, BR_EQ, {.aluout = 0, .eq = false}); // 0xFFFFFFFF is NOT < 1 (unsigned)
}

TEST_F(alu_testbench, Branch_Condition_Tests) {
    const uint32_t A_NEG = 0xFFFFFFFF; // -1 signed, large unsigned
    const uint32_t B_POS = 1;

    //======== A. Equality Checks (Aluout irrelevant, check EQ flag) =========//
    
    // 1. BEQ (0x0)
    check_op(10, 10, ALU_ADD, BR_EQ, {.aluout = 20, .eq = true});
    check_op(10, 11, ALU_ADD, BR_EQ, {.aluout = 21, .eq = false});

    // 2. BNE (0x1)
    check_op(10, 10, ALU_ADD, BR_NE, {.aluout = 20, .eq = false});
    check_op(10, 11, ALU_ADD, BR_NE, {.aluout = 21, .eq = true});

    //=========== B. Signed Comparison Checks ===========//

    // 3. BLT (0x4) - Signed
    check_op(A_NEG, B_POS, ALU_ADD, BR_LT, {.aluout = 0, .eq = true}); // -1 < 1 is true
    check_op(B_POS, A_NEG, ALU_ADD, BR_LT, {.aluout = 0, .eq = false}); // 1 < -1 is false

    // 4. BGE (0x5) - Signed
    check_op(A_NEG, B_POS, ALU_ADD, BR_GE, {.aluout = 0, .eq = false}); // -1 >= 1 is false
    check_op(B_POS, A_NEG, ALU_ADD, BR_GE, {.aluout = 0, .eq = true}); // 1 >= -1 is true

    //========== C. Unsigned Comparison Checks ==========//

    // 5. BLTU (0x6) - Unsigned
    check_op(A_NEG, B_POS, ALU_ADD, BR_LTU, {.aluout = 0, .eq = false}); // 0xFFFFFFFF < 1 is false
    check_op(B_POS, A_NEG, ALU_ADD, BR_LTU, {.aluout = 0, .eq = true}); // 1 < 0xFFFFFFFF is true

    // 6. BGEU (0x7) - Unsigned
    check_op(A_NEG, B_POS, ALU_ADD, BR_GEU, {.aluout = 0, .eq = true}); // 0xFFFFFFFF >= 1 is true
    check_op(B_POS, A_NEG, ALU_ADD, BR_GEU, {.aluout = 0, .eq = false}); // 1 >= 0xFFFFFFFF is false
}