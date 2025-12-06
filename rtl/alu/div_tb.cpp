#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vdiv.h"

#include <iostream>
#include <vector>
#include <tuple>

#define MAX_WAIT 2000   // Max cycles to wait for DONE before timing out

// Test vector type: numerator, denominator, expected result
using Test = std::tuple<int32_t, int32_t, int32_t>;

void tick(Vdiv* top, VerilatedVcdC* tfp, uint64_t& time) {
    // Falling edge
    top->clk = 0;
    top->eval();
    tfp->dump(time++);
    // Rising edge
    top->clk = 1;
    top->eval();
    tfp->dump(time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vdiv* top = new Vdiv;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("div.vcd");

    uint64_t time = 0;

    // -------------------------
    // TEST CASES
    // -------------------------
    std::vector<Test> tests = {
        {10,  2,   5},
        {-15, 3,  -5},
        {100, 10, 10},
        {7,   2,   3},
        {-16, -4,  4},
        {1,   -1, -1}
    };

    int passed = 0;

    for (auto& t : tests) {
        int32_t numerator   = std::get<0>(t);
        int32_t denominator = std::get<1>(t);
        int32_t expected    = std::get<2>(t);

        // -------------------------
        // INIT
        // -------------------------
        top->start = 0;
        top->division_done = 0;
        top->numerator = numerator;
        top->denominator = denominator;

        // One idle tick
        tick(top, tfp, time);

        // -------------------------
        // START DIVISION
        // -------------------------
        top->start = 1;
        tick(top, tfp, time);
        top->start = 0;

        // -------------------------
        // WAIT FOR division_done
        // -------------------------
        int wait_cycles = 0;
        while (!top->division_done && wait_cycles < MAX_WAIT) {
            tick(top, tfp, time);
            wait_cycles++;
        }

        int32_t result = top->result;

        // -------------------------
        // PASS / FAIL REPORT
        // -------------------------
        if (result == expected) {
            std::cout << "PASS: " << numerator << " / " 
                      << denominator << " = "
                      << result << "\n";
            passed++;
        } else {
            std::cout << "FAIL: " << numerator << " / "
                      << denominator << " = "
                      << result
                      << "  (expected " << expected << ")\n";
        }
    }

    std::cout << "\nSummary: " << passed << " / " << tests.size() << " tests passed.\n";

    tfp->close();
    delete tfp;
    delete top;

    return 0;
}
