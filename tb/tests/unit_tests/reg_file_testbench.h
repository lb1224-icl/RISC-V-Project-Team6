#pragma once
#include "Vreg_file.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>

class reg_file_testbench : public ::testing::Test {
public:
    Vreg_file *top;
    VerilatedContext *context;
    VerilatedVcdC *tfp;
    uint64_t ticks = 0;

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        top = new Vreg_file(context);

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("reg_file_test.vcd");
        
        // Initial setup for clock and reset
        top->clk = 0;
        top->eval();
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    // Helper function to cycle the clock and evaluate
    void tick() {
        top->clk = 1;
        top->eval();
        tfp->dump(ticks);
        ticks += 5;
        
        top->clk = 0;
        top->eval();
        tfp->dump(ticks);
        ticks += 5;
    }

    // Helper function to perform a write operation and cycle the clock
    void write_reg(uint8_t addr, uint32_t data) {
        // Setup inputs for write
        top->wr_en = 1;
        top->a3 = addr;
        top->din = data;
        
        // Write happens on the negedge of the clock cycle
        tick(); 
        
        // Deassert write inputs immediately after the write cycle
        top->wr_en = 0;
        top->a3 = 0;
        top->din = 0;
    }
    
    // Helper function to set read addresses and return the current outputs
    struct ReadOutputs {
        uint32_t dout1;
        uint32_t dout2;
        uint32_t a0;
    };

    ReadOutputs read_reg(uint8_t a1_addr, uint8_t a2_addr) {
        top->a1 = a1_addr;
        top->a2 = a2_addr;
        top->eval();
        tfp->dump(ticks);
        ticks += 1;
        
        return {.dout1 = top->dout1, .dout2 = top->dout2, .a0 = top->a0};
    }
};