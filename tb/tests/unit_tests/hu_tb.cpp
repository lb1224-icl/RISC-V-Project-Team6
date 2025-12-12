// TOP: hazard_unit
// RTL: ../../../rtl/hazard_unit/hazard_unit.sv

#include "hu_tb.h"
#include <iostream>

TEST_F(hazard_testbench, ForwardingFromMemHasPriority)
{
    reset_inputs();

    top->rs1_used_e  = 1;
    top->rs1_e       = 5;
    top->rd_m        = 5;
    top->reg_write_m = 1;

    top->rd_w        = 5;
    top->reg_write_w = 1;

    eval();

    EXPECT_EQ(top->fwd_rs1, 0b10); // MEM stage wins
}

TEST_F(hazard_testbench, ForwardingFromWbWhenNoMemMatch)
{
    reset_inputs();

    top->rs2_used_e  = 1;
    top->rs2_e       = 10;
    top->rd_w        = 10;
    top->reg_write_w = 1;

    eval();

    EXPECT_EQ(top->fwd_rs2, 0b01); // WB forward
}

TEST_F(hazard_testbench, NoForwardWhenRsUnused)
{
    reset_inputs();

    top->rs1_e       = 3;
    top->rd_m        = 3;
    top->reg_write_m = 1;
    top->rs1_used_e  = 0;

    eval();

    EXPECT_EQ(top->fwd_rs1, 0b00);
}

TEST_F(hazard_testbench, LoadUseHazardStalls)
{
    reset_inputs();

    top->load_e      = 1;
    top->rd_e        = 7;
    top->rs1_d       = 7;
    top->rs1_used_d  = 1;

    eval();

    EXPECT_TRUE(top->stall);
}

TEST_F(hazard_testbench, LoadUseHazardOnRs2Stalls)
{
    reset_inputs();

    top->load_e      = 1;
    top->rd_e        = 8;
    top->rs2_d       = 8;
    top->rs2_used_d  = 1;

    eval();

    EXPECT_TRUE(top->stall);
}

TEST_F(hazard_testbench, DivBusyCausesDivStall)
{
    reset_inputs();

    top->div_busy_e = 1;

    eval();

    EXPECT_TRUE(top->div_stall);
}

TEST_F(hazard_testbench, CacheNotReadyCausesCacheStall)
{
    reset_inputs();

    top->mem_ready_m = 0;

    eval();

    EXPECT_TRUE(top->cache_stall);
}

TEST_F(hazard_testbench, BranchTakenFlushesPipeline)
{
    reset_inputs();

    top->branch_taken = 1;

    eval();

    EXPECT_TRUE(top->flush);
}

TEST_F(hazard_testbench, NoFalsePositives)
{
    reset_inputs();

    eval();

    EXPECT_FALSE(top->stall);
    EXPECT_FALSE(top->flush);
    EXPECT_FALSE(top->div_stall);
    EXPECT_FALSE(top->cache_stall);
    EXPECT_EQ(top->fwd_rs1, 0b00);
    EXPECT_EQ(top->fwd_rs2, 0b00);
}