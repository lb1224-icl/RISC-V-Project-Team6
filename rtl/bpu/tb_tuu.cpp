// tb_tuu.cpp
#include "Vtuu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <sstream>

static vluint64_t main_time = 0;

static void fail(const std::string& msg) {
    std::cerr << "FAIL @t=" << main_time << ": " << msg << "\n";
    std::exit(1);
}

#define CHECK_EQ(got, exp, name) do { \
    auto _g = (got); auto _e = (exp); \
    if (_g != _e) { \
        std::ostringstream _oss; \
        _oss << name << " got=0x" << std::hex << (uint64_t)_g \
             << " exp=0x" << std::hex << (uint64_t)_e; \
        fail(_oss.str()); \
    } \
} while (0)

#define CHECK_TRUE(cond, name) do { \
    if (!(cond)) fail(std::string(name) + " expected TRUE"); \
} while (0)

#define CHECK_FALSE(cond, name) do { \
    if ((cond)) fail(std::string(name) + " expected FALSE"); \
} while (0)

static void eval_and_trace(Vtuu* dut, VerilatedVcdC* tfp) {
    dut->eval();
    if (tfp) tfp->dump(main_time);
}

static void tick(Vtuu* dut, VerilatedVcdC* tfp) {
    // posedge
    dut->clk = 1;
    eval_and_trace(dut, tfp);
    main_time++;

    // negedge (IMPORTANT: cache writes happen on negedge in your cache.sv)
    dut->clk = 0;
    eval_and_trace(dut, tfp);
    main_time++;
}

static uint32_t make_ins_with_opcode(uint8_t opcode7) {
    // Only bits [6:0] matter for b_or_j in tuu
    return (uint32_t)(opcode7 & 0x7F);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    bool trace = false;
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "+trace") trace = true;
    }

    Vtuu* dut = new Vtuu;

    VerilatedVcdC* tfp = nullptr;
    if (trace) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("tuu.vcd");
    }

    // ---- Default inputs ----
    dut->clk = 0;
    dut->rst = 0;
    dut->ins = 0;
    dut->pc = 0;
    dut->pc_tu_i = 0;
    dut->pcplusimm_tu = 0;
    dut->eq = 0;
    dut->jump = 0;
    dut->branch = 0;
    dut->branch_predicted_e = 0;

    eval_and_trace(dut, tfp);

    // ---- Reset ----
    dut->rst = 1;
    tick(dut, tfp);  // negedge reset clears cache arrays
    tick(dut, tfp);
    dut->rst = 0;
    tick(dut, tfp);

    // After reset: cache invalid => expect miss => pc_target = pc, branch_en = 0
    dut->pc = 0x1000;
    dut->pc_tu_i = 0x2000;
    dut->pcplusimm_tu = 0xDEADBEEF;
    dut->ins = make_ins_with_opcode(0b1100011); // BEQ (b_or_j should be 1)
    dut->jump = 0;
    dut->branch = 0;
    dut->eq = 0;
    dut->branch_predicted_e = 0;
    eval_and_trace(dut, tfp);

    CHECK_EQ(dut->pc_target, dut->pc, "pc_target (miss)");     // mux selects pc on miss
    CHECK_EQ(dut->branch_en, 0, "branch_en (miss)");
    CHECK_EQ(dut->flush, 0, "flush (no jump/branch)");

    // ---- Train / write a new entry (first time => hit2=0 => next_state depends on eq) ----
    // We'll "write" with branch=1 so write_en=1. Cache write occurs on NEGEDGE.
    // Choose eq=1 => next_state = 2'b10, so MSB=1 (predict taken)
    const uint32_t PC_TRAIN   = 0x3000;
    const uint32_t TARGET     = 0x3000 + 0x40;

    dut->pc_tu_i = PC_TRAIN;
    dut->pcplusimm_tu = TARGET;
    dut->eq = 1;
    dut->branch = 1;
    dut->jump = 0;
    dut->branch_predicted_e = 0; // also exercises fd flush for branch (later)
    dut->pc = 0x9999;            // rd_addr doesn't matter for the write itself
    eval_and_trace(dut, tfp);

    tick(dut, tfp); // negedge commits the cache line

    // Stop writing
    dut->branch = 0;
    dut->jump = 0;
    eval_and_trace(dut, tfp);

    // ---- Read back: set pc (rd_addr) = trained PC, should hit1=1 -> pc_target=TARGET ----
    dut->pc  = PC_TRAIN;
    dut->ins = make_ins_with_opcode(0b1100011); // BEQ => b_or_j=1
    eval_and_trace(dut, tfp);

    // pc_target should now come from cache
    CHECK_EQ(dut->pc_target, TARGET, "pc_target (hit)");
    // branch_en = (b_or_j && hit1) ? state_rd_intermediate[1] : 0
    // we stored next_state=2'b10, so [1]=1
    CHECK_EQ(dut->branch_en, 1, "branch_en (trained to taken)");

    // ---- Flush logic checks (fd) ----
    // 1) Jump: flush = ~branch_predicted
    dut->jump = 1;
    dut->branch = 0;
    dut->branch_predicted_e = 0;
    dut->eq = 0;
    eval_and_trace(dut, tfp);
    CHECK_EQ(dut->flush, 1, "flush (jump, predicted=0)");

    dut->branch_predicted_e = 1;
    eval_and_trace(dut, tfp);
    CHECK_EQ(dut->flush, 0, "flush (jump, predicted=1)");

    // 2) Branch: flush = !(eq == branch_predicted)
    dut->jump = 0;
    dut->branch = 1;

    dut->eq = 1; dut->branch_predicted_e = 1;
    eval_and_trace(dut, tfp);
    CHECK_EQ(dut->flush, 0, "flush (branch, eq=1 pred=1)");

    dut->eq = 1; dut->branch_predicted_e = 0;
    eval_and_trace(dut, tfp);
    CHECK_EQ(dut->flush, 1, "flush (branch, eq=1 pred=0)");

    dut->eq = 0; dut->branch_predicted_e = 0;
    eval_and_trace(dut, tfp);
    CHECK_EQ(dut->flush, 0, "flush (branch, eq=0 pred=0)");

    dut->eq = 0; dut->branch_predicted_e = 1;
    eval_and_trace(dut, tfp);
    CHECK_EQ(dut->flush, 1, "flush (branch, eq=0 pred=1)");

    // Done
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete dut;

    std::cout << "PASS\n";
    return 0;
}
