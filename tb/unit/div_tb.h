#pragma once
#include "Vdiv.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"

class div_testbench : public ::testing::Test {
public:
    Vdiv* top;
    VerilatedContext* contextp;
    VerilatedVcdC* tfp;
    vluint64_t ticks = 0;

    void SetUp() override {
        contextp = new VerilatedContext;
        contextp->traceEverOn(true);

        top = new Vdiv{contextp};

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("div_tb.vcd");

        // initial values
        top->clk = 0;
        top->rst = 1;
        top->cache_stall = 0;
        top->start = 0;
        top->div_ctrl = 0;
        top->numerator = 0;
        top->denominator = 0;

        top->eval();

        // some reset ticks
        for (int i = 0; i < 5; ++i) {
            tick();
        }

        top->rst = 0;
        top->eval();
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete contextp;
    }

    void tick() {
        // clock low
        top->clk = 0;
        top->eval();
        tfp->dump(ticks++);

        // clock high
        top->clk = 1;
        top->eval();
        tfp->dump(ticks++);
    }

    uint32_t run_div(uint32_t numerator, uint32_t denominator, uint32_t ctrl, const char* name)
    {
        // apply inputs
        top->numerator = numerator;
        top->denominator = denominator;
        top->div_ctrl = ctrl;
        top->cache_stall = 0; // make sure divider is allowed to run

        // 1-cycle start pulse
        top->start = 1;
        tick();
        top->start = 0;

        const int MAX_CYCLES = 80;
        for (int i = 0; i < MAX_CYCLES; ++i) {
            tick();
        }

        uint32_t got = top->result;

        return got;
    }
};