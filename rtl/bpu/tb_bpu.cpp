// tb_bpu.cpp
#include "Vbpu.h"
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

static inline uint32_t add4(uint32_t x) { return x + 4u; }

static uint32_t make_ins_with_opcode(uint8_t opcode7) {
    // TUU only looks at ins[6:0]
    return (uint32_t)(opcode7 & 0x7F);
}

static void eval_only(Vbpu* dut) {
    dut->eval();
}

static void dump_if(VerilatedVcdC* tfp) {
    if (tfp) tfp->dump(main_time);
}

static void tick(Vbpu* dut, VerilatedVcdC* tfp) {
    // posedge
    dut->clk = 1;
    eval_only(dut);
    dump_if(tfp);
    main_time++;

    // negedge (IMPORTANT: cache writes on negedge inside TUU's cache)
    dut->clk = 0;
    eval_only(dut);
    dump_if(tfp);
    main_time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    bool trace = false;
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "+trace") trace = true;
    }

    Vbpu* dut = new Vbpu;

    VerilatedVcdC* tfp = nullptr;
    if (trace) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("bpu.vcd");
    }

    // -----------------------------
    // Default inputs
    // -----------------------------
    dut->clk = 0;
    dut->rst = 0;
    dut->ins = 0;
    dut->pc = 0;
    dut->pc_tu = 0;
    dut->pcplusimm_tu = 0;
    dut->eq = 0;
    dut->jump = 0;
    dut->branch = 0;
    dut->pc_circuit = 0;
    dut->branch_predicted_e = 0;

    eval_only(dut);
    dump_if(tfp);

    // -----------------------------
    // Reset (clears cache valid bits)
    // -----------------------------
    dut->rst = 1;
    tick(dut, tfp);
    tick(dut, tfp);
    dut->rst = 0;
    tick(dut, tfp);

    // We'll use a B-type opcode so TUU's b_or_j = 1
    dut->ins = make_ins_with_opcode(0b1100011); // BEQ

    // --------------------------------------------------------------------
    // TEST 1: After reset, entry should miss -> pc_next should follow pc_circuit
    // --------------------------------------------------------------------
    const uint32_t PC_FETCH   = 0x1000;
    const uint32_t PC_CIRCUIT = 0x1000;       // "normal" pc (from your pc logic)
    const uint32_t PC_TRAIN   = 0x2000;       // address used for training write (pc_tu)
    const uint32_t TARGET     = 0x2040;       // pcplusimm_tu

    dut->pc = PC_FETCH;            // rd_addr into cache
    dut->pc_circuit = PC_CIRCUIT;  // fallback path in NPU if miss
    dut->pc_tu = PC_TRAIN;         // used only when writing/training
    dut->pcplusimm_tu = TARGET;
    dut->eq = 0;
    dut->jump = 0;
    dut->branch = 0;
    dut->branch_predicted_e = 0;
    eval_only(dut);

    CHECK_EQ(dut->pc_next, PC_CIRCUIT, "T1 pc_next (miss => pc_circuit)");
    CHECK_FALSE(dut->branch_predicted, "T1 branch_predicted (miss)");
    CHECK_FALSE(dut->flush_o, "T1 flush_o (no jump/branch)");

    // --------------------------------------------------------------------
    // TEST 2: Train a new entry by asserting branch=1 (write_en=1).
    // First insertion path uses (!hit2) and sets next_state based on eq.
    // Use eq=1 -> next_state=2'b10 => MSB=1 => predict taken afterwards.
    // --------------------------------------------------------------------
    dut->pc_tu = PC_FETCH;        // IMPORTANT: train entry for PC_FETCH (so future read hits)
    dut->pcplusimm_tu = TARGET;
    dut->eq = 1;
    dut->branch = 1;
    dut->jump = 0;
    dut->branch_predicted_e = 0;
    eval_only(dut);

    // Commit on negedge
    tick(dut, tfp);

    // Stop writing
    dut->branch = 0;
    dut->jump = 0;
    eval_only(dut);

    // --------------------------------------------------------------------
    // TEST 3: Now fetch PC_FETCH again: should hit -> pc_next should be TARGET,
    // and branch_predicted should be 1 (since state MSB=1 and pc_next==pc_target)
    // --------------------------------------------------------------------
    dut->pc = PC_FETCH;
    dut->pc_circuit = PC_CIRCUIT; // should be ignored on hit
    dut->ins = make_ins_with_opcode(0b1100011); // keep b_or_j=1
    eval_only(dut);

    CHECK_EQ(dut->pc_next, TARGET, "T3 pc_next (hit => pc_target)");
    CHECK_TRUE(dut->branch_predicted, "T3 branch_predicted (hit & branch_en)");
    CHECK_FALSE(dut->flush_o, "T3 flush_o (no jump/branch)");

    // --------------------------------------------------------------------
    // TEST 4: Flush behaviour through TUU->NPU.
    // In NPU: pc_next = flush ? (pc_tu_o+4) : (branch_en?pc_target:pc_circuit)
    // TUU sets pc_tu_o = pc_tu_i (i.e., your pc_tu input).
    //
    // 4a) Jump with branch_predicted_e=0 => flush=1 => pc_next must be pc_tu+4
    // --------------------------------------------------------------------
    const uint32_t PC_TU_FOR_FLUSH = 0x3000;
    dut->pc_tu = PC_TU_FOR_FLUSH;
    dut->jump = 1;
    dut->branch = 0;
    dut->branch_predicted_e = 0;
    eval_only(dut);

    CHECK_TRUE(dut->flush_o, "T4a flush_o (jump predicted=0 => flush=1)");
    CHECK_EQ(dut->pc_next, add4(PC_TU_FOR_FLUSH), "T4a pc_next (flush override => pc_tu+4)");

    // 4b) Jump with branch_predicted_e=1 => flush=0 (and we trained PC_FETCH to hit)
    dut->jump = 1;
    dut->branch_predicted_e = 1;
    dut->pc = PC_FETCH;
    eval_only(dut);

    CHECK_FALSE(dut->flush_o, "T4b flush_o (jump predicted=1 => flush=0)");
    CHECK_EQ(dut->pc_next, TARGET, "T4b pc_next (no flush, hit => pc_target)");

    // --------------------------------------------------------------------
    // TEST 5: Branch flush: flush = !(eq == branch_predicted_e)
    // 5a) branch=1, eq=1, predicted=0 => flush=1 => pc_next=pc_tu+4
    // --------------------------------------------------------------------
    dut->jump = 0;
    dut->branch = 1;
    dut->eq = 1;
    dut->branch_predicted_e = 0;
    dut->pc_tu = 0x4000;
    eval_only(dut);

    CHECK_TRUE(dut->flush_o, "T5a flush_o (branch eq=1 pred=0 => flush=1)");
    CHECK_EQ(dut->pc_next, add4(0x4000), "T5a pc_next (flush override)");

    // 5b) branch=1, eq=1, predicted=1 => flush=0
    dut->branch_predicted_e = 1;
    eval_only(dut);

    CHECK_FALSE(dut->flush_o, "T5b flush_o (branch eq=1 pred=1 => flush=0)");

    // Clean up
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete dut;

    std::cout << "PASS\n";
    return 0;
}
