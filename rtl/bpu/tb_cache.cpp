// tb_cache.cpp
#include <verilated.h>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "Vcache.h"
#include "verilated_vcd_c.h"

// ------------------------- helpers -------------------------
static vluint64_t main_time = 0;

static void tick(Vcache* dut, VerilatedVcdC* tfp = nullptr) {
    // posedge
    dut->clk = 1;
    dut->eval();
    if (tfp) tfp->dump(main_time);
    main_time++;

    // negedge (YOUR WRITES HAPPEN HERE)
    dut->clk = 0;
    dut->eval();
    if (tfp) tfp->dump(main_time);
    main_time++;
}

static void expect_u32(const char* name, uint32_t got, uint32_t exp) {
    if (got != exp) {
        std::cerr << "FAIL " << name << ": got 0x" << std::hex << got
                  << " expected 0x" << exp << std::dec << "\n";
        std::exit(1);
    }
}

static void expect_u2(const char* name, uint32_t got, uint32_t exp) {
    got &= 0x3u; exp &= 0x3u;
    if (got != exp) {
        std::cerr << "FAIL " << name << ": got " << got
                  << " expected " << exp << "\n";
        std::exit(1);
    }
}

static void expect_bool(const char* name, uint32_t got, uint32_t exp) {
    got &= 1u; exp &= 1u;
    if (got != exp) {
        std::cerr << "FAIL " << name << ": got " << got
                  << " expected " << exp << "\n";
        std::exit(1);
    }
}

// For CACHE_SIZE=16 => index bits=4, tag bits = upper 28
static uint32_t make_addr(uint32_t tag, uint32_t index) {
    return (tag << 4) | (index & 0xFu);
}

// ------------------------- tests -------------------------
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    auto* dut = new Vcache;

    // Optional VCD tracing (enable by running with +trace)
    VerilatedVcdC* tfp = nullptr;
    if (Verilated::commandArgsPlusMatch("trace")) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("wave.vcd");
    }

    // Init inputs
    dut->clk = 0;
    dut->reset = 0;

    dut->wr_addr  = 0;
    dut->rd_addr  = 0;
    dut->data_in0 = 0;
    dut->data_in1 = 0;
    dut->data_in2 = 0;
    dut->write_en = 0;

    dut->eval();

    // ---------------- reset ----------------
    std::cout << "[TB] Reset...\n";
    dut->reset = 1;
    tick(dut, tfp); // reset active (posedge/negedge)
    tick(dut, tfp);
    dut->reset = 0;
    tick(dut, tfp);

    // ---------------- test 1: miss on empty ----------------
    std::cout << "[TB] Test1: miss on empty cache\n";
    uint32_t idx = 3;
    uint32_t tagA = 0x1234567; // 28-bit tag
    dut->rd_addr = make_addr(tagA, idx);
    dut->wr_addr = make_addr(tagA, idx);
    dut->write_en = 0;
    tick(dut, tfp);

    expect_bool("hit1(empty)", dut->hit1, 0);
    expect_u32 ("data_out1(empty)", dut->data_out1, 0);
    expect_u2  ("data_out2(empty)", dut->data_out2, 0);

    // hit2 depends on wr_addr line validity (should also be 0 after reset)
    expect_bool("hit2(empty)", dut->hit2, 0);
    expect_u2  ("data_out3(empty)", dut->data_out3, 0);

    // ---------------- test 2: write then read hit ----------------
    std::cout << "[TB] Test2: write then read hit\n";
    uint32_t data0 = 0xDEADBEEF;
    uint32_t data1 = 0xCAFEBABE;
    uint32_t st    = 2; // 2-bit

    dut->wr_addr  = make_addr(tagA, idx);
    dut->rd_addr  = make_addr(tagA, idx);
    dut->data_in0 = data0;
    dut->data_in1 = data1;
    dut->data_in2 = st;
    dut->write_en = 1;

    // Write happens on the NEGedge inside tick()
    tick(dut, tfp);

    // Deassert write and observe combinational hit/read
    dut->write_en = 0;
    tick(dut, tfp);

    expect_bool("hit1(after write)", dut->hit1, 1);
    expect_u32 ("data_out1(after write)", dut->data_out1, data1);
    expect_u2  ("data_out2(after write)", dut->data_out2, st);

    // For hit2/data_out3: those are based on wr_addr line index/tag
    expect_bool("hit2(after write)", dut->hit2, 1);
    expect_u2  ("data_out3(after write)", dut->data_out3, st);

    // ---------------- test 3: tag mismatch (same index) => miss ----------------
    std::cout << "[TB] Test3: tag mismatch => miss\n";
    uint32_t tagB = 0x0ABCDEF; // different tag, same index
    dut->rd_addr = make_addr(tagB, idx);
    dut->wr_addr = make_addr(tagB, idx);
    tick(dut, tfp);

    expect_bool("hit1(tag mismatch)", dut->hit1, 0);
    expect_u32 ("data_out1(tag mismatch)", dut->data_out1, 0);
    expect_u2  ("data_out2(tag mismatch)", dut->data_out2, 0);

    // hit2 should also be 0 for that different tag (line valid but tag differs)
    expect_bool("hit2(tag mismatch)", dut->hit2, 0);
    expect_u2  ("data_out3(tag mismatch)", dut->data_out3, 0);

    // ---------------- test 4: overwrite same index with new tag => now hit that tag ----------------
    std::cout << "[TB] Test4: overwrite line with new tag, verify\n";
    uint32_t data1B = 0x11223344;
    uint32_t stB    = 1;

    dut->wr_addr  = make_addr(tagB, idx);
    dut->rd_addr  = make_addr(tagB, idx);
    dut->data_in0 = 0x0;        // unused by outputs, but drive it anyway
    dut->data_in1 = data1B;
    dut->data_in2 = stB;
    dut->write_en = 1;
    tick(dut, tfp);

    dut->write_en = 0;
    tick(dut, tfp);

    expect_bool("hit1(after overwrite)", dut->hit1, 1);
    expect_u32 ("data_out1(after overwrite)", dut->data_out1, data1B);
    expect_u2  ("data_out2(after overwrite)", dut->data_out2, stB);

    // Old tagA should now miss
    dut->rd_addr = make_addr(tagA, idx);
    tick(dut, tfp);
    expect_bool("hit1(old tag misses)", dut->hit1, 0);

    std::cout << "[TB] ALL TESTS PASSED ✅\n";

    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete dut;
    return 0;
}
