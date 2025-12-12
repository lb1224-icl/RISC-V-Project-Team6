#pragma once
#include "Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"
#include <iostream>

// Struct to hold the expected outputs for easy checking
struct AluExpected {
    uint32_t aluout;
    bool eq;
};

class alu_testbench : public ::testing::Test {
public:
    Valu *top;
    VerilatedContext *context;
    VerilatedVcdC *tfp;
    uint64_t ticks = 0;

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        top = new Valu(context);

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("alu_test.vcd");
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    // Helper function to set inputs, evaluate, and check both outputs
    void check_op(uint32_t op1, uint32_t op2, uint8_t alu_ctrl, uint8_t funct3, const AluExpected& expected) {
        top->aluop1 = op1;
        top->aluop2 = op2;
        top->aluctrl = alu_ctrl;
        top->funct3 = funct3;
        
        top->eval();
        
        tfp->dump(ticks); 
        ticks += 10; 

        // Check ALU Result
        EXPECT_EQ(top->aluout, expected.aluout) 
            << "Instruction: ALU_CTRL=" << (int)alu_ctrl << " - Mismatch on aluout";
        
        // Check Equality/Branch Flag
        EXPECT_EQ(top->eq, expected.eq)
            << "Instruction: FUNCT3=" << (int)funct3 << " - Mismatch on eq";
    }
};