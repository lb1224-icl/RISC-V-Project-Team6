module hazard_unit (
    input  logic       clk,
    input  logic       rst,
    input  logic [4:0] rd_e,
    input  logic [4:0] rd_m,
    input  logic [4:0] rd_w,
    input  logic [4:0] rs1_d,
    input  logic [4:0] rs2_d,
    input  logic [4:0] rs1_e,
    input  logic [4:0] rs2_e,
    input  logic       rs1_used_d,   // 1 if current ID-stage instruction actually uses rs1
    input  logic       rs2_used_d,   // 1 if current ID-stage instruction actually uses rs2
    input  logic       rs1_used_e,   // 1 if current EX-stage instruction actually uses rs1
    input  logic       rs2_used_e,   // 1 if current EX-stage instruction actually uses rs2
    input  logic       div_en_e,
    input  logic       reg_write_m,
    input  logic       reg_write_w,
    input  logic       load_e,       // 1 if EX-stage instruction is a load
    input  logic       branch_taken,
    input  logic       div_busy_e,
    input  logic       mem_ready_m,

    output logic       stall,
    output logic       flush,
    output logic [1:0] fwd_rs1,      // forward to rs1
    output logic [1:0] fwd_rs2,      // forward to rs2
    output logic       div_stall,
    output logic       cache_stall
);

logic div_busy_q;

always_ff @(posedge clk or posedge rst) begin
    if (rst)
        div_busy_q <= 1'b0;
    else
        div_busy_q <= div_busy_e;
end

always_comb begin
    // defaults
    stall       = 1'b0;
    flush       = 1'b0;
    div_stall   = 1'b0;
    cache_stall = 1'b0;
    fwd_rs1     = 2'b00;
    fwd_rs2     = 2'b00;

    // forwarding priority: MEM stage has highest priority (newest data)
    // RS1 forwarding
    if (rs1_used_e) begin
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs1_e)) begin
            fwd_rs1 = 2'b10;
        end else if ((rd_w != 5'd0) && reg_write_w && (rd_w == rs1_e)) begin
            fwd_rs1 = 2'b01;
        end
    end

    // RS2 forwarding
    if (rs2_used_e) begin
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs2_e)) begin
            fwd_rs2 = 2'b10;
        end else if ((rd_w != 5'd0) && reg_write_w && (rd_w == rs2_e)) begin
            fwd_rs2 = 2'b01;
        end
    end

    // load-use stall: stall if a load is in EX and ID-stage needs its result
    if (load_e && ((rs1_used_d && (rd_e == rs1_d)) || (rs2_used_d && (rd_e == rs2_d)))) begin
        stall = 1'b1;
    end

    // for long-running div instructions, stall until source operands are no longer pending writes
    if (div_en_e) begin
        if ((rs1_used_e && ((rd_m != 5'd0 && reg_write_m && (rd_m == rs1_e)) ||
                            (rd_w != 5'd0 && reg_write_w && (rd_w == rs1_e))))) begin
            stall = 1'b1;
        end
        if ((rs2_used_e && ((rd_m != 5'd0 && reg_write_m && (rd_m == rs2_e)) ||
                            (rd_w != 5'd0 && reg_write_w && (rd_w == rs2_e))))) begin
            stall = 1'b1;
        end
    end

    // hold pipeline one extra cycle after divider finishes so DONE result is visible
    if (div_busy_e || div_busy_q) begin
        div_stall = 1'b1;
    end

    if (!mem_ready_m) begin
        cache_stall = 1'b1;
    end

    // flush only for control-flow changes; cache stalls are handled by holding pipeline regs
    if (branch_taken) begin
        flush = 1'b1;
    end
end


endmodule
