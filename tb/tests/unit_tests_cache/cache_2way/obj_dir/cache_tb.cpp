#include "cache_testbench.h"
#include <unordered_map>
#include <random>
#include <iostream>

//
// ----------------------
//  Test 1: Basic write/read
// ----------------------
TEST_F(CacheTestbench, BasicWriteRead) {
    bool hit;

    // Write some values
    writeWord(0x00, 0xAAAA5555, hit);
    EXPECT_EQ(readWord(0x00, hit), 0xAAAA5555);

    writeWord(0x04, 0x12345678, hit);
    EXPECT_EQ(readWord(0x04, hit), 0x12345678);

    writeWord(0x08, 0xCAFEBABE, hit);
    EXPECT_EQ(readWord(0x08, hit), 0xCAFEBABE);
}

//
// ----------------------
//  Test 2: Conflict eviction test
// ----------------------
TEST_F(CacheTestbench, ConflictTest) {
    bool hit;
    uint32_t addr1 = 0x000;
    uint32_t addr2 = 0x400;   // Maps to same set in small cache

    writeWord(addr1, 0x11111111, hit);
    writeWord(addr2, 0x22222222, hit);

    // Read back both; at least one must cause eviction
    EXPECT_EQ(readWord(addr2, hit), 0x22222222);
    EXPECT_EQ(readWord(addr1, hit), 0x11111111);
}

//
// ----------------------
//  Test 3: Write-through correctness
// ----------------------
TEST_F(CacheTestbench, WriteThroughTest) {
    bool hit;

    // Write a pattern several times to same location
    writeWord(0x20, 0xAAAAAAAA, hit);
    writeWord(0x20, 0xBBBBBBBB, hit);
    writeWord(0x20, 0xCCCCCCCC, hit);

    EXPECT_EQ(readWord(0x20, hit), 0xCCCCCCCC);
}

//
// ----------------------
//  Test 4: Random access stress test
// ----------------------
//
//   This verifies correctness over hundreds of operations and prints
//   hit/miss statistics at the end.
//
TEST_F(CacheTestbench, RandomAccessStress) {
    std::mt19937 rng(12345);
    std::uniform_int_distribution<uint32_t> addr_dist(0, 0x3FF);  // 0..1023
    std::uniform_int_distribution<uint32_t> data_dist;
    std::uniform_real_distribution<double>  op_dist(0.0, 1.0);

    std::unordered_map<uint32_t, uint32_t> model;

    const int OPS = 500;

    for (int i = 0; i < OPS; i++) {
        uint32_t word_index = addr_dist(rng) & 0xFF;
        uint32_t addr       = word_index << 2;

        double op = op_dist(rng);
        bool hit;

        if (op < 0.5) {
            // ---------------- WRITE ----------------
            uint32_t val = data_dist(rng);
            writeWord(addr, val, hit);
            model[addr] = val;

        } else {
            // ---------------- READ ----------------
            uint32_t actual = readWord(addr, hit);

            uint32_t expected = model.count(addr) ? model[addr] : 0;

            EXPECT_EQ(actual, expected)
                << "Mismatch at addr 0x" << std::hex << addr
                << " after " << std::dec << i << " ops";
        }
    }

    std::cout << "\n==== RandomAccessStress Statistics ====\n";
    std::cout << "Hits:   " << hit_count  << "\n";
    std::cout << "Misses: " << miss_count << "\n";
    double ratio = (hit_count + miss_count)
                       ? (100.0 * hit_count / (hit_count + miss_count))
                       : 0.0;
    std::cout << "Hit ratio: " << ratio << "%\n";
}
