#include "mmu_testbench.h"

#include <unordered_map>
#include <random>
#include <iostream>

// Basic functional sanity: writes then reads same addresses
TEST_F(MmuTestbench, BasicWriteRead) {
    uint32_t a1 = 0x000;
    uint32_t a2 = 0x040;

    uint32_t v1 = 0xDEADBEEFu;
    uint32_t v2 = 0xCAFEBABEu;

    writeWord(a1, v1);
    writeWord(a2, v2);

    int cycles;
    bool hit;

    // first reads may be misses (no write-allocate), but data must be correct
    uint32_t r1 = readWord(a1, cycles, hit);
    EXPECT_EQ(r1, v1);

    uint32_t r2 = readWord(a2, cycles, hit);
    EXPECT_EQ(r2, v2);

    // second reads should definitely hit in some cache
    uint32_t r1b = readWord(a1, cycles, hit);
    EXPECT_EQ(r1b, v1);
    EXPECT_TRUE(hit);

    uint32_t r2b = readWord(a2, cycles, hit);
    EXPECT_EQ(r2b, v2);
    EXPECT_TRUE(hit);
}

// Force multiple lines into same L1 set, check everything still reads back
TEST_F(MmuTestbench, ConflictEvictionL1) {
    // For your params: LINE_SIZE = 16, SET_BITS = 7 -> conflict stride = 1 << (4+7) = 0x800
    const uint32_t base   = 0x000;
    const uint32_t stride = 0x800;   // all three map to same L1 set

    uint32_t a0 = base + 0 * stride;
    uint32_t a1 = base + 1 * stride;
    uint32_t a2 = base + 2 * stride;

    uint32_t v0 = 0x11111111u;
    uint32_t v1 = 0x22222222u;
    uint32_t v2 = 0x33333333u;

    writeWord(a0, v0);
    writeWord(a1, v1);
    writeWord(a2, v2);

    int cycles;
    bool hit;

    // first reads -> pull them into cache(s)
    uint32_t r0 = readWord(a0, cycles, hit);
    uint32_t r1 = readWord(a1, cycles, hit);
    uint32_t r2 = readWord(a2, cycles, hit);

    EXPECT_EQ(r0, v0);
    EXPECT_EQ(r1, v1);
    EXPECT_EQ(r2, v2);

    // Now read again; because L1 is 2-way and we have 3 conflicting lines,
    // at least one of these should NOT be an L1 hit, but all data must be correct.
    bool hit0b, hit1b, hit2b;
    uint32_t r0b = readWord(a0, cycles, hit0b);
    uint32_t r1b = readWord(a1, cycles, hit1b);
    uint32_t r2b = readWord(a2, cycles, hit2b);

    EXPECT_EQ(r0b, v0);
    EXPECT_EQ(r1b, v1);
    EXPECT_EQ(r2b, v2);

    // Not all three can be L1 hits simultaneously for a 2-way set
    EXPECT_FALSE(hit0b && hit1b && hit2b);
}

// Try to provoke an L2/L3-only hit by thrashing one L1 set
TEST_F(MmuTestbench, MultiLevelHitPath) {
    const uint32_t base   = 0x000;
    const uint32_t stride = 0x800;   // conflicts in same L1 set

    uint32_t target = base + 0 * stride;
    uint32_t v      = 0xA5A5A5A5u;

    // write, then first read (likely miss, fills all levels)
    writeWord(target, v);
    int cycles;
    bool hit;
    uint32_t r1 = readWord(target, cycles, hit);
    EXPECT_EQ(r1, v);

    // Thrash L1 set with two other conflicting lines;
    // the target line should remain in lower levels.
    writeWord(base + stride,     0x12345678u);
    writeWord(base + 2*stride,   0x87654321u);
    readWord(base + stride,   cycles, hit);
    readWord(base + 2*stride, cycles, hit);

    // Now read target again: value must still be correct, even if L1 evicted it.
    uint32_t r2 = readWord(target, cycles, hit);
    EXPECT_EQ(r2, v);
    // we don't assert hit/miss here; just correctness through the hierarchy
}

// Check that repeated writes really change the value observed through MMU
TEST_F(MmuTestbench, WriteThroughCheck) {
    uint32_t addr = 0x100;
    uint32_t val1 = 0xAAAA5555u;
    uint32_t val2 = 0x12345678u;

    writeWord(addr, val1);

    int c1;
    bool h1;
    uint32_t r1 = readWord(addr, c1, h1);
    EXPECT_EQ(r1, val1);

    // second write should overwrite RAM and any cached copy
    writeWord(addr, val2);

    int c2;
    bool h2;
    uint32_t r2 = readWord(addr, c2, h2);
    EXPECT_EQ(r2, val2);

    // both reads should have taken at least one cycle
    EXPECT_GT(c1, 0);
    EXPECT_GT(c2, 0);
}

// Randomised stress with a simple software RAM model
TEST_F(MmuTestbench, RandomAccessStress) {
    std::mt19937 rng(12345);
    std::uniform_int_distribution<uint32_t> addr_dist(0, 0x3FF);  // word index
    std::uniform_int_distribution<uint32_t> data_dist;
    std::uniform_real_distribution<double>   op_dist(0.0, 1.0);

    std::unordered_map<uint32_t, uint32_t> model;

    const int OPS = 500;

    for (int i = 0; i < OPS; ++i) {
        // 256-word region, word-aligned
        uint32_t word_index = addr_dist(rng);
        uint32_t addr       = (word_index & 0xFFu) << 2;

        double op = op_dist(rng);

        if (op < 0.5) {
            // WRITE
            uint32_t val = data_dist(rng);
            writeWord(addr, val);
            model[addr] = val;
        } else {
            // READ
            int  cycles;
            bool hit;
            uint32_t actual = readWord(addr, cycles, hit);

            uint32_t expected = 0;
            auto it = model.find(addr);
            if (it != model.end()) {
                expected = it->second;
            } else {
                // assume RAM powers up as 0
                expected = 0;
            }

            EXPECT_EQ(actual, expected)
                << "Random test mismatch at addr 0x"
                << std::hex << addr << " after " << std::dec << i << " operations";
        }
    }

    double total_reads = static_cast<double>(read_hits + read_misses);
    double hit_ratio   = (total_reads > 0.0)
                       ? (static_cast<double>(read_hits) / total_reads) * 100.0
                       : 0.0;

    std::cout << "==== RandomAccessStress stats ====\n";
    std::cout << "Read hits   : " << read_hits   << "\n";
    std::cout << "Read misses : " << read_misses << "\n";
    std::cout << "Hit ratio   : " << hit_ratio   << "%\n";
}
