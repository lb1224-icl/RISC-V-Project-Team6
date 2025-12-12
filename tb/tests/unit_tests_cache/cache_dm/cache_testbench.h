#pragma once

#include "Vmmu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"

#include <cstdint>

#define MAX_SIM_CYC 20000

class MmuTestbench : public ::testing::Test {
public:
    Vmmu*              top;
    VerilatedContext*  context;
    VerilatedVcdC*     tfp;
    uint64_t           ticks;

    int read_hits   = 0;
    int read_misses = 0;

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        ticks = 0;

        top = new Vmmu(context);
        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("mmu_test.vcd");

        // init signals
        top->clk       = 0;
        top->rst       = 1;
        top->mem_valid = 0;
        top->mem_we    = 0;
        top->mem_addr  = 0;
        top->mem_w_data = 0;
        top->mem_byte_en = 0;

        cycle(5);
        top->rst = 0;
        cycle(1);
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    void cycle(int n = 1) {
        for (int i = 0; i < n; ++i) {
            // rising edge
            top->clk = 0;
            top->eval();
            tfp->dump((ticks * 2) + 0);

            top->clk = 1;
            top->eval();
            tfp->dump((ticks * 2) + 1);

            ticks++;
        }
    }

    // write -> wait until mem_ready = 1
    void writeWord(uint32_t addr, uint32_t data, uint8_t byte_en = 0xF) {
        top->mem_valid  = 1;
        top->mem_we     = 1;
        top->mem_addr   = addr;
        top->mem_w_data = data;
        top->mem_byte_en = byte_en;

        int guard = 0;
        while (!top->mem_ready && guard < MAX_SIM_CYC) {
            cycle();
            guard++;
        }
        // one extra cycle to settle back toward IDLE
        cycle();

        top->mem_valid = 0;
        top->mem_we    = 0;
        top->mem_byte_en = 0;
    }

    // read -> wait until mem_ready = 1, then sample mem_r_data
    uint32_t readWord(uint32_t addr, int &cycles_used, bool &hit_out) {
        top->mem_valid = 1;
        top->mem_we    = 0;
        top->mem_addr  = addr;
        top->mem_byte_en = 0;

        cycles_used = 0;
        int guard = 0;

        while (!top->mem_ready && guard < MAX_SIM_CYC) {
            cycle();
            guard++;
            cycles_used++;
        }

        // first cycle where mem_ready is high
        uint32_t r = top->mem_r_data;
        hit_out = top->cache_hit;

        // one more cycle to let FSM transition back
        cycle();
        cycles_used++;

        top->mem_valid = 0;

        if (hit_out) read_hits++;
        else         read_misses++;

        return r;
    }
};
