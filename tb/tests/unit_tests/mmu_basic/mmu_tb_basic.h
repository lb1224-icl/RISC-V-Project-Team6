#pragma once

#include "Vmmu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"

#define MAX_SIM_CYC 20000

class MmuBasicTb : public ::testing::Test {
public:
    Vmmu* top;
    VerilatedContext* context;
    VerilatedVcdC* tfp;
    uint64_t ticks;

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        ticks = 0;

        top = new Vmmu(context);
        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("mmu_basic.vcd");

        // Safe reset
        top->clk       = 0;
        top->rst       = 1;
        top->mem_valid = 0;
        top->mem_we    = 0;
        top->mem_addr  = 0;
        top->mem_w_data = 0;

        cycle(5);
        top->rst = 0;
        cycle(2);  // let everything settle
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    void cycle(int n = 1) {
        for (int i = 0; i < n; ++i) {
            for (int ph = 0; ph < 2; ++ph) {
                top->eval();
                tfp->dump(ticks * 2 + ph);
                top->clk = !top->clk;
            }
            ++ticks;
        }
    }

    // write -> wait until mem_ready == 1, then drop request
    void writeWord(uint32_t addr, uint32_t data, int &cycles_used) {
        top->mem_valid  = 1;
        top->mem_we     = 1;
        top->mem_addr   = addr;
        top->mem_w_data = data;

        cycles_used = 0;
        int guard = 0;

        while (!top->mem_ready && guard < MAX_SIM_CYC) {
            cycle();
            ++guard;
            ++cycles_used;
        }

        // Drop the request
        top->mem_valid = 0;
        top->mem_we    = 0;

        // One extra cycle to let MMU return to IDLE
        cycle();
    }

    // read -> wait until mem_ready == 1, sample mem_r_data/cache_hit *immediately*
    uint32_t readWord(uint32_t addr, int &cycles_used, bool &hit_out) {
        top->mem_valid = 1;
        top->mem_we    = 0;
        top->mem_addr  = addr;

        cycles_used = 0;
        int guard = 0;

        while (!top->mem_ready && guard < MAX_SIM_CYC) {
            cycle();
            ++guard;
            ++cycles_used;
        }

        // mem_ready is high *now* – sample result & hit
        uint32_t r = top->mem_r_data;
        hit_out    = top->cache_hit;

        // Drop request
        top->mem_valid = 0;
        cycle();  // let FSM go back to IDLE

        return r;
    }
};
