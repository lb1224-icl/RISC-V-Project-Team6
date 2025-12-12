#pragma once
#include "Vsign_extend.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"

class sign_extend_testbench : public ::testing::Test {
public:
    Vsign_extend *top;
    VerilatedContext *context;
    VerilatedVcdC *tfp;
    uint64_t ticks = 0;    // required for gtk wave otherwise all tests would happen at same time = 0

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        top = new Vsign_extend(context);

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("sign_extend_test.vcd");
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    uint32_t EvalOp(uint32_t instr, int src) {
        top->ins = instr;
        top->imm_src = src;
        
        top->eval();
        
        // Dump waveform data
        tfp->dump(ticks); 
        ticks += 10; 

        return top->imm_op;
    }
};