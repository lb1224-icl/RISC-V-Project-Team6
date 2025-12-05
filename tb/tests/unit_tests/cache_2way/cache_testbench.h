#pragma once
#include "Vmmu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"

class CacheTestbench : public ::testing::Test {
public:
    Vmmu *top;
    VerilatedContext *context;
    VerilatedVcdC *tfp;
    uint64_t ticks = 0;

    int hit_count = 0;
    int miss_count = 0;

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        top = new Vmmu(context);

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("cache_test.vcd");

        top->clk = 0;
        top->rst = 1;
        cycle(5);
        top->rst = 0;
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    void cycle(int n = 1) {
        for (int i = 0; i < n; i++) {
            top->clk = 0; top->eval(); tfp->dump(2*ticks);
            top->clk = 1; top->eval(); tfp->dump(2*ticks + 1);
            ticks++;
        }
    }

    // ------------------------------------------------
    // FIXED WRITE HANDSHAKE
    // ------------------------------------------------
    void writeWord(uint32_t addr, uint32_t data, bool &hit_out) {
        top->mem_valid = 1;
        top->mem_we    = 1;
        top->mem_addr  = addr;
        top->mem_w_data= data;

        cycle();  // allow combinational hit to update
        hit_out = top->cache_hit;

        // Hold mem_valid until ready
        while (!top->mem_ready) {
            cycle();
        }

        // Drop valid *in the same cycle after ready*
        top->mem_valid = 0;
        cycle();

        if (hit_out) hit_count++;
        else miss_count++;
    }

    // ------------------------------------------------
    // FIXED READ HANDSHAKE
    // ------------------------------------------------
    uint32_t readWord(uint32_t addr, bool &hit_out) {
        top->mem_valid = 1;
        top->mem_we    = 0;
        top->mem_addr  = addr;

        cycle();  
        hit_out = top->cache_hit;

        while (!top->mem_ready) {
            cycle();
        }

        uint32_t r = top->mem_r_data;

        // Drop mem_valid *after seeing ready*
        top->mem_valid = 0;
        cycle();

        if (hit_out) hit_count++;
        else miss_count++;

        return r;
    }
};
