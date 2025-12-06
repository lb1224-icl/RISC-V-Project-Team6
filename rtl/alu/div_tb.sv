`timescale 1ns/1ps

module div_tb;

    // ------------------------------
    // DUT Inputs / Outputs
    // ------------------------------
    logic clk;
    logic start;
    logic [1:0] div_ctrl;

    logic [31:0] numerator;
    logic [31:0] denominator;

    logic [31:0] result;
    logic division_done;

    // ------------------------------
    // Instantiate Divider
    // ------------------------------
    div DUT (
        .clk(clk),
        .start(start),
        .div_ctrl(div_ctrl),
        .numerator(numerator),
        .denominator(denominator),
        .result(result),
        .division_done(division_done)
    );

    // ------------------------------
    // 1ns Period Clock
    // ------------------------------
    initial clk = 0;
    always #5 clk = ~clk;     // 100 MHz

    // ------------------------------
    // Utility Task: Run a test
    // ------------------------------
    task run_test(
        input [31:0] num,
        input [31:0] den,
        input [1:0] ctrl,
        input integer expected,
        input string name
    );
    begin
        numerator   = num;
        denominator = den;
        div_ctrl    = ctrl;

        start = 1;
        @(posedge clk);
        start = 0;

        // Wait for operation to finish
        wait (division_done == 1);

        if (result !== expected)
            $display("❌ FAIL %-12s  num=%0d  den=%0d → got=%0d  expected=%0d",
                     name, num, den, result, expected);
        else
            $display("✅ PASS %-12s  num=%0d  den=%0d → result=%0d",
                     name, num, den, result);
    end
    endtask

    // ------------------------------
    // Run all tests
    // ------------------------------
    initial begin
        $display("\n=== STARTING DIVIDER TESTBENCH ===\n");

        start = 0;
        div_ctrl = 0;
        numerator = 0;
        denominator = 0;

        @(posedge clk);

        // --------------------------
        // DIV (signed division)
        // div_ctrl = 2'b00
        // --------------------------
        run_test( 32'd10,  32'd2,   2'b00,  5,      "DIV 10/2");
        run_test(-32'd15,  32'd3,   2'b00, -5,      "DIV -15/3");
        run_test( 32'd20, -32'd5,   2'b00, -4,      "DIV 20/-5");
        run_test(-32'd20, -32'd4,   2'b00,  5,      "DIV -20/-4");

        // divide by zero (RISC-V → -1)
        run_test( 32'd10,  32'd0,   2'b00,  -1,     "DIV x/0");

        // --------------------------
        // DIVU (unsigned division)
        // div_ctrl = 2'b01
        // --------------------------
        run_test(32'd20, 32'd4, 2'b01, 5, "DIVU 20/4");
        run_test(32'hFFFF_FFFF, 32'd2, 2'b01, 32'h7FFF_FFFF, "DIVU large");

        // divide by zero → 0xFFFF_FFFF
        run_test( 32'd55, 32'd0, 2'b01, 32'hFFFF_FFFF, "DIVU x/0");

        // --------------------------
        // REM (signed remainder)
        // div_ctrl = 2'b10
        // --------------------------
        run_test( 32'd10,   32'd3, 2'b10,  1,  "REM 10%3");
        run_test(-32'd10,   32'd3, 2'b10, -1,  "REM -10%3");
        run_test( 32'd10,  -32'd3, 2'b10,  1,  "REM 10%-3");
        run_test(-32'd10,  -32'd3, 2'b10, -1,  "REM -10%-3");

        // divide by zero → remainder = numerator
        run_test( 32'd88,  32'd0, 2'b10, 88, "REM x%0");

        // --------------------------
        // REMU (unsigned remainder)
        // div_ctrl = 2'b11
        // --------------------------
        run_test(32'd10, 32'd3, 2'b11, 1,   "REMU 10%3");
        run_test(32'hFFFF_FFFF, 32'd256, 2'b11, 255, "REMU big");

        // divide by zero → numerator
        run_test(32'd77, 32'd0, 2'b11, 77, "REMU x%0");

        $display("\n=== TESTBENCH FINISHED ===\n");
        $finish;
    end

endmodule
