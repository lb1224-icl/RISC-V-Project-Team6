#pragma once
#include "Vcontrol_unit.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>

// Define the expected output structure for clarity
struct ControlOutputs {
    bool jump_d;
    bool branch_d;
    uint8_t result_src;
    bool mem_write;
    uint8_t alu_ctrl;
    bool alu_src;
    uint8_t imm_src;
    bool reg_write;
    bool op1_pc;
    bool jalr;
    bool rs1_signal;
    bool rs2_signal;
    uint8_t mul_ctrl;
    uint8_t div_ctrl;
    bool mul_en;
    bool div_en;
};

class control_unit_testbench : public ::testing::Test {
public:
    Vcontrol_unit *top;
    VerilatedContext *context;
    VerilatedVcdC *tfp;
    uint64_t ticks = 0;

    void SetUp() override {
        context = new VerilatedContext;
        context->traceEverOn(true);
        top = new Vcontrol_unit(context);

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("control_unit_test.vcd");
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete context;
    }

    // Helper function to set the instruction, evaluate, and check all outputs
    void check_instruction(uint32_t instruction, const ControlOutputs& expected) {
        top->ins = instruction;
        top->eval();
        
        tfp->dump(ticks); 
        ticks += 10; 

        // Check against expected values
        EXPECT_EQ(top->jump_d, expected.jump_d) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on jump_d";
        EXPECT_EQ(top->branch_d, expected.branch_d) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on branch_d";
        EXPECT_EQ(top->result_src, expected.result_src) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on result_src";
        EXPECT_EQ(top->mem_write, expected.mem_write) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on mem_write";
        EXPECT_EQ(top->alu_src, expected.alu_src) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on alu_src";
        EXPECT_EQ(top->imm_src, expected.imm_src) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on imm_src";
        EXPECT_EQ(top->reg_write, expected.reg_write) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on reg_write";
        EXPECT_EQ(top->op1_pc, expected.op1_pc) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on op1_pc";
        EXPECT_EQ(top->jalr, expected.jalr) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on jalr";
        EXPECT_EQ(top->rs1_signal, expected.rs1_signal) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on rs1_signal";
        EXPECT_EQ(top->rs2_signal, expected.rs2_signal) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on rs2_signal";
        
        // ALU and M-Extension Checks
        EXPECT_EQ(top->mul_en, expected.mul_en) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on mul_en";
        EXPECT_EQ(top->div_en, expected.div_en) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on div_en";
        EXPECT_EQ(top->mul_ctrl, expected.mul_ctrl) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on mul_ctrl";
        EXPECT_EQ(top->div_ctrl, expected.div_ctrl) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on div_ctrl";
        EXPECT_EQ(top->alu_ctrl, expected.alu_ctrl) << "Instruction: 0x" << std::hex << instruction << " - Mismatch on alu_ctrl";
    }
};