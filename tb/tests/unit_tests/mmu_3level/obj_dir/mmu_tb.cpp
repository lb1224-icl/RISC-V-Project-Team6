#include "mmu_testbench.h"
#include <gtest/gtest.h>
#include <unordered_map>
#include <random>

// =====================
// Test 1: Simple write/read
// =====================
TEST(MmuBasic, SimpleWriteRead) {
    MmuTb tb;
    tb.reset();

    tb.writeWord(0x100, 0xAAAA5555);
    uint32_t r = tb.readWord(0x100);

    ASSERT_EQ(r, 0xAAAA5555);
}

// =====================
// Test 2: Sequential block read
// =====================
TEST(MmuBasic, SequentialBlockReads) {
    MmuTb tb;
    tb.reset();

    for (uint32_t a = 0; a < 64; a += 4)
        tb.writeWord(a, 0x10000000 + a);

    for (uint32_t a = 0; a < 64; a += 4) {
        uint32_t r = tb.readWord(a);
        ASSERT_EQ(r, 0x10000000 + a) 
            << "Mismatch at address 0x" << std::hex << a;
    }
}

// =====================
// Test 3: Overwrite test
// =====================
TEST(MmuBasic, OverwriteTest) {
    MmuTb tb;
    tb.reset();

    uint32_t addr = 0x200;
    tb.writeWord(addr, 0x11111111);
    tb.writeWord(addr, 0x22222222);
    tb.writeWord(addr, 0x33333333);

    uint32_t r = tb.readWord(addr);
    ASSERT_EQ(r, 0x33333333);
}

// =====================
// Test 4: Cross-line aliasing
// =====================
TEST(MmuBasic, CrossLineAlias) {
    MmuTb tb;
    tb.reset();

    uint32_t A = 0x000;
    uint32_t B = 0x010; // next cache line
    tb.writeWord(A, 0xAAAA0001);
    tb.writeWord(B, 0xBBBB0002);

    ASSERT_EQ(tb.readWord(A), 0xAAAA0001);
    ASSERT_EQ(tb.readWord(B), 0xBBBB0002);
}

// =====================
// Test 5: Small random stress model-check
// =====================
TEST(MmuBasic, RandomModelCheck) {
    MmuTb tb;
    tb.reset();

    std::unordered_map<uint32_t,uint32_t> model;

    std::mt19937 rng(123);
    std::uniform_int_distribution<uint32_t> addr_gen(0, 0x3FF);
    std::uniform_int_distribution<uint32_t> data_gen;

    for (int i = 0; i < 200; i++) {
        uint32_t addr = addr_gen(rng) & ~3;
        bool is_write = (rng() & 1);

        if (is_write) {
            uint32_t val = data_gen(rng);
            model[addr] = val;
            tb.writeWord(addr, val);
        } else {
            uint32_t expected = model.count(addr) ? model[addr] : 0;
            uint32_t actual   = tb.readWord(addr);
            ASSERT_EQ(actual, expected)
                << "Random mismatch at 0x" << std::hex << addr 
                << " iter=" << std::dec << i;
        }
    }
}

// =====================
// Test 6: Byte-masked write
// =====================
TEST(MmuBasic, ByteMaskedWrite) {
    MmuTb tb;
    tb.reset();

    uint32_t addr = 0x300;
    tb.writeWord(addr, 0xCAFEBABE);
    tb.writeWord(addr, 0x00000055, 0b0001); // update lowest byte only

    ASSERT_EQ(tb.readWord(addr), 0xCAFEBA55u);
}

// =====================
// Test 7: Halfword-masked write
// =====================
TEST(MmuBasic, HalfwordMaskedWrite) {
    MmuTb tb;
    tb.reset();

    uint32_t addr = 0x320;
    tb.writeWord(addr, 0x01020304);
    tb.writeWord(addr, 0xABCD0000, 0b1100); // update upper halfword

    ASSERT_EQ(tb.readWord(addr), 0xABCD0304u);
}
