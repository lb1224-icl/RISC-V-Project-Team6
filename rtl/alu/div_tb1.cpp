#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vdiv.h"

#include <iostream>
#include <vector>
#include <tuple>

static const int MAX_CYCLES = 2000;

// One test case definition
struct TestCase {
    int32_t numerator;
    int32_t denominator;
    int     ctrl;      // 0=DIV, 1=DIVU, 2=REM, 3=REMU
    uint32_t expected;
    const char* name;
};

void tick(Vdiv* dut, VerilatedVcdC* tfp, int &cycle)
{
    dut->clk = 0;
    dut->eval();
    tfp->dump(cycle * 2);

    dut->clk = 1;
    dut->eval();
    tfp->dump(cycle * 2 + 1);

    cycle++;
}

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Vdiv* dut = new Vdiv;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open("div.vcd");

    int cycle = 0;

    // --- Reset ---
    dut->clk = 0;
    dut->start = 0;
    for (int i = 0; i < 5; i++) tick(dut, tfp, cycle);

    // -----------------------------
    // Test vector list
    // -----------------------------
    std::vector<TestCase> tests = {
        {10, 2, 0, 5, "DIV 10/2"},
        {-15, 3, 0, (uint32_t)-5, "DIV -15/3"},
        {7, 2, 0, 3, "DIV 7/2"},
        {-16, -4, 0, 4, "DIV -16/-4"},

        {10u, 2u, 1, 5u, "DIVU 10/2"},
        {0xFFFFFFFFu, 2u, 1, 0x7FFFFFFF, "DIVU UINT32_MAX/2"},
        {100u, 10u, 1, 10u, "DIVU 100/10"},

        {10, 3, 2, 1, "REM 10 % 3"},
        {-10, 3, 2, (uint32_t)-1, "REM -10 % 3"},
        {7, 2, 2, 1, "REM 7 % 2"},

        {10u, 3u, 3, 1u, "REMU 10 % 3"},
        {0xFFFFFFFFu, 10u, 3, 5u, "REMU UINT32_MAX % 10"},
        {100u, 10u, 3, 0u, "REMU 100 % 10"}
    };

    // -----------------------------
    // Run all tests
    // -----------------------------
    for (auto& t : tests) {

        dut->numerator = t.numerator;
        dut->denominator = t.denominator;
        dut->div_ctrl = t.ctrl;

        // Pulse start for one cycle
        dut->start = 1;
        tick(dut, tfp, cycle);
        dut->start = 0;

        // Wait until division_done goes high
        int timeout = 0;
        while (!dut->division_done && timeout < MAX_CYCLES) {
            tick(dut, tfp, cycle);
            timeout++;
        }

        uint32_t got = dut->result;

        if (got == t.expected)
            std::cout << "PASS: " << t.name 
                      << "  got=" << got << "\n";
        else
            std::cout << "FAIL: " << t.name
                      << "  got=" << got 
                      << " expected=" << t.expected << "\n";
    }

    tfp->close();
    delete dut;
    delete tfp;

    return 0;
}
