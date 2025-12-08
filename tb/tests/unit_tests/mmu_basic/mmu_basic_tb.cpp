#include "mmu_basic.h"

// Test 1: simple read after reset
// Assumes RAM is initialised to 0 in your ram.sv
TEST_F(MmuBasicTb, ReadAfterResetIsZero) {
    int cycles = 0;
    bool hit   = false;

    uint32_t addr = 0x00000040; // some word-aligned address
    uint32_t r = readWord(addr, cycles, hit);

    EXPECT_EQ(r, 0u) << "RAM should read as 0 after reset at addr 0x40";
    // On very first access we expect a miss + RAM fill
    EXPECT_FALSE(hit) << "First ever read should be a miss";
}

// Test 2: single write then read same address
TEST_F(MmuBasicTb, BasicWriteThenReadSameAddress) {
    uint32_t addr = 0x00000080;
    uint32_t val  = 0xDEADBEEF;

    int wcycles = 0;
    writeWord(addr, val, wcycles);

    int rcycles = 0;
    bool hit    = false;
    uint32_t r  = readWord(addr, rcycles, hit);

    EXPECT_EQ(r, val) << "Read-back value should match written value";
}

// Test 3: second read should hit in cache
TEST_F(MmuBasicTb, SecondReadIsCacheHit) {
    uint32_t addr = 0x000000C0;
    uint32_t val  = 0x12345678;

    int wcycles = 0;
    writeWord(addr, val, wcycles);

    int c1 = 0;
    bool hit1 = false;
    uint32_t r1 = readWord(addr, c1, hit1);
    ASSERT_EQ(r1, val) << "First read must match written value";
    EXPECT_FALSE(hit1) << "First read should be a cache hit (L1/L2/L3)";
    EXPECT_EQ(c1, 5)   << "1 cycle read, 4 cycle fill";

    int c2 = 0;
    bool hit2 = false;
    uint32_t r2 = readWord(addr, c2, hit2);
    EXPECT_EQ(r2, val) << "Second read must also return same value";
    EXPECT_TRUE(hit2)  << "Second read should be a cache hit (L1/L2/L3)";
}
