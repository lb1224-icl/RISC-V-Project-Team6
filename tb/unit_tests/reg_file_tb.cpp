// TOP: reg_file
// RTL: ../../rtl/alu/reg_file.sv

#include "reg_file_testbench.h"

// ==========================================
// TEST 1: Basic Write and Read Verification
// ==========================================
TEST_F(reg_file_testbench, BasicWriteRead) {
    const uint8_t ADDR_A = 5;
    const uint8_t ADDR_B = 6;
    const uint32_t DATA_A = 0xDEADBEEF;
    const uint32_t DATA_B = 0xFEEDFACE;

    // 1. Check initial state (should be 0)
    auto initial = read_reg(ADDR_A, ADDR_B);
    EXPECT_EQ(initial.dout1, 0) << "Initial read A failed";
    EXPECT_EQ(initial.dout2, 0) << "Initial read B failed";
    
    // 2. Write data to registers
    write_reg(ADDR_A, DATA_A);
    write_reg(ADDR_B, DATA_B);

    // 3. Read back data (combinational read)
    auto result = read_reg(ADDR_A, ADDR_B);
    EXPECT_EQ(result.dout1, DATA_A) << "Read after write A failed";
    EXPECT_EQ(result.dout2, DATA_B) << "Read after write B failed";
}

// ==========================================
// TEST 2: Write Protection for Register x0 (Zero Register)
// ==========================================
TEST_F(reg_file_testbench, X0Protection) {
    const uint8_t ADDR_X0 = 0;
    const uint32_t TEST_DATA = 0xCAFEBABE;
    
    // 1. Read x0 (should always be 0)
    auto pre_write = read_reg(ADDR_X0, 1);
    EXPECT_EQ(pre_write.dout1, 0) << "Pre-write read of x0 failed";

    // 2. Attempt to write to x0
    write_reg(ADDR_X0, TEST_DATA);
    
    // 3. Read x0 again (must remain 0)
    auto post_write = read_reg(ADDR_X0, 1);
    EXPECT_EQ(post_write.dout1, 0) << "Write to x0 incorrectly succeeded";
}

// ==========================================
// TEST 3: Reading x0 (Zero Register) as a Source Operand
// ==========================================
TEST_F(reg_file_testbench, X0ReadSource) {
    const uint8_t ADDR_X0 = 0;
    const uint8_t ADDR_X1 = 1;
    const uint32_t TEST_DATA = 0x12345678;

    // 1. Write data to a non-zero register
    write_reg(ADDR_X1, TEST_DATA);

    // 2. Read x0 on dout1 and x1 on dout2
    auto result = read_reg(ADDR_X0, ADDR_X1);
    
    // x0 read must be 0
    EXPECT_EQ(result.dout1, 0) << "Reading x0 as dout1 failed to return zero";
    // x1 read must be TEST_DATA
    EXPECT_EQ(result.dout2, TEST_DATA) << "Reading x1 as dout2 failed";
}

// ==========================================
// TEST 4: Dedicated a0 Output (x10)
// ==========================================
TEST_F(reg_file_testbench, A0DebugOutput) {
    const uint8_t ADDR_A0 = 10;
    const uint32_t DATA_A0 = 0xAA00AA00;
    
    // 1. Write data to A0 (x10)
    write_reg(ADDR_A0, DATA_A0);
    
    // 2. Read x10 normally and check the debug output
    auto result = read_reg(ADDR_A0, 0); // Read x10 on dout1
    
    // Check internal array access (dout1)
    EXPECT_EQ(result.dout1, DATA_A0) << "Normal read of x10 failed";
    
    // Check dedicated a0 debug output
    EXPECT_EQ(result.a0, DATA_A0) << "Dedicated a0 debug output failed";
}

// ==========================================
// TEST 5: Write-After-Read (WAR) Hazard Check
// ==========================================
TEST_F(reg_file_testbench, WriteAfterReadHazard) {
    const uint8_t ADDR = 2;
    const uint32_t DATA_OLD = 0x1;
    const uint32_t DATA_NEW = 0x2;

    // 1. Initialize register
    write_reg(ADDR, DATA_OLD);
    
    // 2. Setup write for next negedge
    top->wr_en = 1;
    top->a3 = ADDR;
    top->din = DATA_NEW;
    
    // 3. Read during the same cycle (clk=0, before negedge write)
    top->a1 = ADDR;
    top->a2 = 0;
    top->eval();

    // The read (dout1) must see the OLD data, as the write has not completed yet.
    EXPECT_EQ(top->dout1, DATA_OLD) << "Read failed to see old data before negedge write";

    // 4. Complete write cycle (write occurs on negedge)
    tick(); 

    // 5. Read again: must now see the NEW data
    auto result = read_reg(ADDR, 0);
    EXPECT_EQ(result.dout1, DATA_NEW) << "Read failed to see new data after write completed";
}