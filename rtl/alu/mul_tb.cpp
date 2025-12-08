#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmul.h"

#include <iostream>
#include <vector>
#include <cstdint>

// Test case definition
struct TestCase {
    uint32_t rd1;       // input as 32-bit pattern
    uint32_t rd2;       // input as 32-bit pattern
    int      mul_ctrl;  // 0=MUL, 1=MULH, 2=MULHSU, 3=MULHU
    uint32_t expected;  // expected result
    const char* name;
};

// Simple tick function for VCD dumping
void tick(Vmul* dut, VerilatedVcdC* tfp, int &cycle) {
    dut->eval();
    tfp->dump(cycle++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vmul* dut = new Vmul;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open("mul.vcd");

    int cycle = 0;

    // -----------------------------
    // Test vector list
    // -----------------------------
    std::vector<TestCase> tests = {
        // MUL (low 32 bits)
        {10u, 3u, 0, 30u, "MUL 10*3"},
        {static_cast<uint32_t>(int32_t(-5)), 6u, 0, static_cast<uint32_t>(int32_t(-30)), "MUL -5*6"},
        {0x7FFFFFFFu, 2u, 0, 0xFFFFFFFEu, "MUL INT_MAX*2"},

        // MULH (high 32 bits of signed multiply)
        {10u, 3u, 1, 0u, "MULH 10*3"},
        {static_cast<uint32_t>(int32_t(-5)), 6u, 1, 0xFFFFFFFFu, "MULH -5*6"},
        {0x7FFFFFFFu, 2u, 1, 0u, "MULH INT_MAX*2"},

        // MULHSU (high 32 bits of signed*unsigned multiply)
        {10u, 3u, 2, 0u, "MULHSU 10*3"},
        {static_cast<uint32_t>(int32_t(-5)), 6u, 2, 0xFFFFFFFFu, "MULHSU -5*6"},
        {0x7FFFFFFFu, 2u, 2, 0u, "MULHSU INT_MAX*2"},

        // MULHU (high 32 bits of unsigned*unsigned multiply)
        {10u, 3u, 3, 0u, "MULHU 10*3"},
        {0xFFFFFFFFu, 2u, 3, 1u, "MULHU UINT32_MAX*2"},
        {0x7FFFFFFFu, 2u, 3, 0u, "MULHU INT_MAX*2"},
    };

    // -----------------------------
    // Run all tests
    // -----------------------------
    for (auto& t : tests) {
        dut->rd1 = t.rd1;
        dut->rd2 = t.rd2;
        dut->mul_ctrl = t.mul_ctrl;

        tick(dut, tfp, cycle);

        uint32_t got = dut->result;

        if (got == t.expected)
            std::cout << "PASS: " << t.name << "  got=0x" << std::hex << got << std::dec << "\n";
        else
            std::cout << "FAIL: " << t.name
                      << "  got=0x" << std::hex << got
                      << " expected=0x" << t.expected << std::dec << "\n";
    }

    tfp->close();
    delete dut;
    delete tfp;

    return 0;
}
