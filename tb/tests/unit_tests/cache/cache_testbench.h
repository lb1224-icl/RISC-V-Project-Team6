#pragma once

#include "Vmmu.h"
#include "verilated.h"
#include "gtest/gtest.h"

class CacheTestbench : public ::testing::Test {
protected:
    VerilatedContext* context_ = nullptr;
    Vmmu*             dut_     = nullptr;
    vluint64_t        ticks_   = 0;

    void SetUp() override {
        context_ = new VerilatedContext;
        context_->traceEverOn(false);

        dut_ = new Vmmu(context_);

        // Initialise inputs
        dut_->clk        = 0;
        dut_->rst        = 0;
        dut_->mem_valid  = 0;
        dut_->mem_we     = 0;
        dut_->mem_addr   = 0;
        dut_->mem_w_data = 0;

        reset();
    }

    void TearDown() override {
        if (dut_) {
            dut_->final();
            delete dut_;
            dut_ = nullptr;
        }
        delete context_;
        context_ = nullptr;
    }

    void tick() {
        // rising + falling edges as two steps
        dut_->clk = 0;
        dut_->eval();
        ticks_++;

        dut_->clk = 1;
        dut_->eval();
        ticks_++;
    }

    void reset() {
        dut_->rst = 1;
        for (int i = 0; i < 5; ++i) tick();
        dut_->rst = 0;
        tick();
    }

    // blocking read (single word)
    uint32_t readWord(uint32_t addr, int &cycles_taken) {
        const int MAX_WAIT = 100;

        dut_->mem_addr   = addr;
        dut_->mem_w_data = 0;
        dut_->mem_we     = 0;
        dut_->mem_valid  = 1;

        cycles_taken = 0;
        while (!dut_->mem_ready && cycles_taken < MAX_WAIT) {
            tick();
            cycles_taken++;
        }

        EXPECT_LT(cycles_taken, MAX_WAIT) << "Read timed out waiting for mem_ready";

        uint32_t val = dut_->mem_r_data;

        // drop valid and let MMU return to idle
        dut_->mem_valid = 0;
        tick();

        return val;
    }

    // blocking write (single word)
    int writeWord(uint32_t addr, uint32_t data) {
        const int MAX_WAIT = 100;

        dut_->mem_addr   = addr;
        dut_->mem_w_data = data;
        dut_->mem_we     = 1;
        dut_->mem_valid  = 1;

        int cycles = 0;
        while (!dut_->mem_ready && cycles < MAX_WAIT) {
            tick();
            cycles++;
        }

        EXPECT_LT(cycles, MAX_WAIT) << "Write timed out waiting for mem_ready";

        dut_->mem_valid = 0;
        dut_->mem_we    = 0;
        tick();

        return cycles;
    }
};
