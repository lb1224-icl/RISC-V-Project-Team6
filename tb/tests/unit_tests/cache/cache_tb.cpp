#include "cache_testbench.h"

// Simple smoke test: first read should miss, second should hit & be faster
TEST_F(CacheTestbench, ReadMissThenHit) {
    int miss_cycles = 0;
    int hit_cycles  = 0;

    uint32_t addr = 0x00000100;

    uint32_t v1 = readWord(addr, miss_cycles);
    uint32_t v2 = readWord(addr, hit_cycles);

    // Data must be identical on repeated read
    EXPECT_EQ(v1, v2);

    // First access should be a miss (block fill), so slower
    EXPECT_GT(miss_cycles, hit_cycles)
        << "Expected miss on first access and hit on second access";
}

// Fill line then write same address: test write-hit (write-through + cache update)
TEST_F(CacheTestbench, WriteHitAfterFill) {
    int cycles = 0;
    uint32_t addr = 0x00000040;

    // First read to bring line into cache
    uint32_t initial = readWord(addr, cycles);

    // Now write new value to same address
    uint32_t new_val = 0xA5A5A5A5u;
    int write_cycles = writeWord(addr, new_val);
    EXPECT_GE(write_cycles, 1);

    // Read again: should be a cache hit and return new value
    int hit_cycles = 0;
    uint32_t after = readWord(addr, hit_cycles);

    EXPECT_EQ(after, new_val)
        << "Write-hit did not update cached value";
}

// Write miss should NOT allocate line in cache (no-write-allocate)
TEST_F(CacheTestbench, WriteMissDoesNotAllocate) {
    int cycles1 = 0, cycles2 = 0, cycles3 = 0;

    // A = base address that we fill into cache first
    uint32_t A = 0x00000040;

    // C = base address but next word so should be read hit
    uint32_t C = 0x00000044;

    // B = same index, different tag (assuming 4KB/16B lines: index = bits [11:4])
    uint32_t B = 0x00100040;

    // 1) Fill line containing A
    uint32_t val_A1 = readWord(A, cycles1);

    EXPECT_EQ(cycles1, 5); // read miss then 4 to fill words

    uint32_t val_C1 = readWord(C, cycles1);

    EXPECT_EQ(cycles1, 1); // read hit

    // 2) Write to B (no prior read → write miss → no allocate)
    uint32_t val_B = 0xCAFEBABEu;
    int write_cycles = writeWord(B, val_B);
    EXPECT_GE(write_cycles, 1);

    

    // 3) Read A again: should still be a cache hit and unchanged
    uint32_t val_A2 = readWord(A, cycles2);
    EXPECT_EQ(val_A2, val_A1)
        << "Write-miss to B incorrectly evicted A (no-write-allocate violated)";

    EXPECT_EQ(cycles2, 1);

    // 4) Read B now: this causes a read miss and block fill from RAM,
    // which should return what we previously wrote via write-through.
    uint32_t val_B2 = readWord(B, cycles3);
    EXPECT_EQ(val_B2, val_B)
        << "Write-through did not update RAM correctly on write-miss";

    EXPECT_EQ(cycles3, 5); // read miss then 4 to fill words
}

// Standard gtest main
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
