#pragma once
#include "Vhazard_unit.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"

class hazard_testbench : public ::testing::Test {
public:
    Vhazard_unit* top;
    VerilatedContext* contextp;
    VerilatedVcdC* tfp;
    vluint64_t ticks = 0;

    void SetUp() override {
        contextp = new VerilatedContext;
        contextp->traceEverOn(true);

        top = new Vhazard_unit{contextp};

        tfp = new VerilatedVcdC();
        top->trace(tfp, 99);
        tfp->open("hazard_tb.vcd");

        // default all inputs to zero
        reset_inputs();
        top->eval();
    }

    void TearDown() override {
        tfp->close();
        delete tfp;
        delete top;
        delete contextp;
    }

    void reset_inputs() {
        top->rd_e = 0;
        top->rd_m = 0;
        top->rd_w = 0;
        top->rs1_d = 0;
        top->rs2_d = 0;
        top->rs1_e = 0;
        top->rs2_e = 0;

        top->rs1_used_d = 0;
        top->rs2_used_d = 0;
        top->rs1_used_e = 0;
        top->rs2_used_e = 0;

        top->reg_write_m = 0;
        top->reg_write_w = 0;
        top->load_e = 0;
        top->branch_taken = 0;
        top->div_busy_e = 0;
        top->mem_ready_m = 1;
    }

    void eval() {
        top->eval();
        tfp->dump(ticks++);
    }
};