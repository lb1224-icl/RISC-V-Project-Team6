// TOP: sign_extend
// RTL: ../../rtl/sign_extend/sign_extend.sv

#include "sign_extend_testbench.h"
#include <random>
#include <iostream>

// ==========================================
// TEST 1: I-Type (ADDI, LW)
// Logic: imm = ins[31:20]
// ==========================================
TEST_F(sign_extend_testbench, ITypeTest) {
    // 1. Positive case: 0x001... -> 1
    uint32_t ins_pos = 0x00100000; 
    EXPECT_EQ(EvalOp(ins_pos, 0), 1);

    // 2. Negative case: 0xFFF... -> -1
    uint32_t ins_neg = 0xFFF00000;
    EXPECT_EQ(EvalOp(ins_neg, 0), 0xFFFFFFFF);
}

// ==========================================
// TEST 2: S-Type (SW)
// Logic: imm = {ins[31:25], ins[11:7]}
// ==========================================
TEST_F(sign_extend_testbench, STypeTest) {
    // Construct -1: needs all 1s in top 7 bits and bits 11:7
    // Top 7 bits (31:25) = 0x7F << 25 = 0xFE000000
    // Bot 5 bits (11:7)  = 0x1F << 7  = 0x00000F80
    uint32_t ins_neg = 0xFE000F80;
    EXPECT_EQ(EvalOp(ins_neg, 1), 0xFFFFFFFF);
}

// ==========================================
// TEST 3: B-Type (BEQ)
// Logic: Scrambled immediate
// ==========================================
TEST_F(sign_extend_testbench, BTypeTest) {
    // Test known value: -2 (0xFFFFFFFE)
    // 13-bit representation: 1 11111 11111 0
    // This requires setting specific bits in the instruction high
    // The previous S-type construction (0xFE000F80) actually sets
    // all relevant high bits to 1, effectively creating a -2 for B-type
    // due to the 0 at bit 0.
    uint32_t ins_neg_two = 0xFE000F80;
    EXPECT_EQ(EvalOp(ins_neg_two, 2), 0xFFFFFFFE);
}

// ==========================================
// TEST 4: U-Type (LUI)
// Logic: imm = {ins[31:12], 12'b0}
// ==========================================
TEST_F(sign_extend_testbench, UTypeTest) {
    uint32_t ins = 0x12345678;
    // Should mask off bottom 12 bits
    EXPECT_EQ(EvalOp(ins, 4), 0x12345000);
}


// ==========================================
// GOLDEN MODEL FOR RANDOM TESTING
// ==========================================
int32_t golden_sign_extend(uint32_t ins, int src) {
    int32_t imm = 0;
    switch (src) {
        case 0: // I-Type: inst[31:20]
             // C++ right shift on signed int preserves sign
             imm = (int32_t)ins >> 20; 
             break;
        case 1: // S-Type: {inst[31:25], inst[11:7]}
             imm = ((int32_t)ins >> 25) << 5; // Top 7 bits, sign extended
             imm |= (ins >> 7) & 0x1F;        // Bottom 5 bits
             break;
        case 2: // B-Type: {inst[31], inst[7], inst[30:25], inst[11:8], 0}
        {
             // Extract sign bit (31) and extend it to full 32-bit mask
             int32_t sign = (int32_t)ins >> 31; 
             // Bit 7 (11th position in immediate)
             uint32_t b11 = (ins >> 7) & 1;
             // Bits 30:25 (10:5 in immediate)
             uint32_t b10_5 = (ins >> 25) & 0x3F;
             // Bits 11:8 (4:1 in immediate)
             uint32_t b4_1 = (ins >> 8) & 0xF;
             
             // Reconstruct without sign extension first
             uint32_t val = (b11 << 11) | (b10_5 << 5) | (b4_1 << 1);
             
             // Apply sign
             if (sign) val |= 0xFFFFF000; // Manual sign extension for top 20 bits
             imm = val;
             break;
        }
        case 3: // J-Type: {inst[31], inst[19:12], inst[20], inst[30:21], 0}
        {
             int32_t sign = (int32_t)ins >> 31;
             uint32_t b19_12 = (ins >> 12) & 0xFF; // imm[19:12]
             uint32_t b11    = (ins >> 20) & 1;    // imm[11]
             uint32_t b10_1  = (ins >> 21) & 0x3FF;// imm[10:1]

             uint32_t val = (b19_12 << 12) | (b11 << 11) | (b10_1 << 1);
             
             if (sign) val |= 0xFFF00000;
             imm = val;
             break;
        }
        case 4: // U-Type: {inst[31:12], 0}
             imm = ins & 0xFFFFF000;
             break;
    }
    return imm;
}


// ==========================================
// TEST 5: J-Type (JAL)
// Logic: Complex Scramble
// ==========================================
TEST_F(sign_extend_testbench, JTypeTest) {
    // 1. Max Positive Offset (0x0001FFFFE)
    // Instruction 0x3FFFFFFF sets all non-sign bits (imm[1:20]) to 1.
    uint32_t ins_pos_max = 0x7FFFF000; 
    EXPECT_EQ(EvalOp(ins_pos_max, 3), 0x000FFFFE);

    // 2. Max Negative Offset (0xFFF80000)
    // Instruction 0x80000000 sets only the sign bit (ins[31]) to 1.
    uint32_t ins_neg_min = 0x80000000;
    EXPECT_EQ(EvalOp(ins_neg_min, 3), 0xFFF00000);
}


// ==========================================
// TEST 6: Randomized Stress Test
// ==========================================
TEST_F(sign_extend_testbench, RandomStress) {
    std::mt19937 rng(12345);
    std::uniform_int_distribution<uint32_t> dist_word(0, 0xFFFFFFFF);
    std::uniform_int_distribution<int> dist_src(0, 4);

    const int ITERATIONS = 10000;
    
    std::cout << "\nRunning " << ITERATIONS << " randomized vectors...\n";

    for (int i = 0; i < ITERATIONS; ++i) {
        uint32_t instruction = dist_word(rng);
        int src = dist_src(rng);

        // Hardware Output
        uint32_t hw_result = EvalOp(instruction, src);

        // Software "Golden Model" Output
        uint32_t sw_result = (uint32_t)golden_sign_extend(instruction, src);

        ASSERT_EQ(hw_result, sw_result) 
            << "Mismatch at Iteration " << i 
            << "\nInstr: 0x" << std::hex << instruction
            << "\nSrc:   " << std::dec << src
            << "\nHW:    0x" << std::hex << hw_result
            << "\nSW:    0x" << sw_result;
    }
}