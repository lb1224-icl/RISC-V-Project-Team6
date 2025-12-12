// tb_npu.cpp
#include "Vnpu.h"
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

static void eval_only(Vnpu* dut, VerilatedVcdC* tfp) {
    dut->eval();
    if (tfp) tfp->dump(main_time++);
}

// Purely combinational DUT, but we still tick time for VCD readability
static void step(Vnpu* dut, VerilatedVcdC* tfp) {
    eval_only(dut, tfp);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    bool trace = false;
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "+trace") trace = true;
    }

    Vnpu* dut = new Vnpu;

    VerilatedVcdC* tfp = nullptr;
    if (trace) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("npu.vcd");
    }

    // ---- Default inputs ----
    dut->pc_circuit = 0;
    dut->flush = 0;
    dut->pc_tu = 0;
    dut->branch_en = 0;
    dut->pc_target = 0;
    step(dut, tfp);

    // Helper lambda: drive inputs and check expected outputs
    auto run_case = [&](const char* name,
                        uint32_t pc_circuit,
                        bool flush,
                        uint32_t pc_tu,
                        bool branch_en,
                        uint32_t pc_target,
                        uint32_t exp_pc_next,
                        bool exp_branch_predicted)
    {
        dut->pc_circuit = pc_circuit;
        dut->flush = flush;
        dut->pc_tu = pc_tu;
        dut->branch_en = branch_en;
        dut->pc_target = pc_target;
        step(dut, tfp);

        CHECK_EQ(dut->pc_next, exp_pc_next, std::string(name) + " pc_next");
        if (exp_branch_predicted) CHECK_TRUE(dut->branch_predicted, std::string(name) + " branch_predicted");
        else                      CHECK_FALSE(dut->branch_predicted, std::string(name) + " branch_predicted");
    };

    // -------------------------------------------------------------------------
    // Expected behaviour:
    // pc_branch_en = branch_en ? pc_target : pc_circuit
    // pc_tu_p4     = pc_tu + 4
    // pc_next      = flush ? pc_tu_p4 : pc_branch_en
    // branch_predicted = branch_en && (pc_next == pc_target)
    // -------------------------------------------------------------------------

    // 1) No branch_en, no flush => pc_next = pc_circuit, predicted=0
    run_case("case1",
             /*pc_circuit*/ 0x1000, /*flush*/ false,
             /*pc_tu*/      0x2000, /*branch_en*/ false,
             /*pc_target*/  0xDEADBEEF,
             /*exp_pc_next*/0x1000,
             /*exp_pred*/   false);

    // 2) branch_en=1, no flush => pc_next = pc_target, predicted=1
    run_case("case2",
             0x1111, false,
             0x2222, true,
             0x3333,
             0x3333,
             true);

    // 3) flush=1 overrides branch mux => pc_next = pc_tu+4, predicted depends on equality
    // 3a) flush=1, branch_en=1, but pc_tu+4 != pc_target => predicted=0
    run_case("case3a",
             0xAAAA, true,
             0x4000, true,
             0x5000,
             add4(0x4000),
             false);

    // 3b) flush=1, branch_en=1, and pc_tu+4 == pc_target => predicted=1
    run_case("case3b",
             0xAAAA, true,
             0x6000, true,
             add4(0x6000),
             add4(0x6000),
             true);

    // 4) flush=1, branch_en=0 => pc_next=pc_tu+4, predicted must be 0
    run_case("case4",
             0x7777, true,
             0x8000, false,
             0x9000,
             add4(0x8000),
             false);

    // 5) Edge-ish: pc_target equals pc_circuit, branch_en=0 => still not predicted
    run_case("case5",
             0xABCD, false,
             0x1000, false,
             0xABCD,
             0xABCD,
             false);

    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete dut;

    std::cout << "PASS\n";
    return 0;
}
