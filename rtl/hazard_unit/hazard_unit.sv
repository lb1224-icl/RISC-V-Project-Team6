module hazard_unit (
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
    input  logic       reg_write_m,
    input  logic       reg_write_w,
    input  logic       load_e,       // 1 if EX-stage instruction is a load
    input  logic       branch_taken,
    input  logic       div_done_e,
    input  logic       div_en_e,
    output logic       stall,
    output logic       flush,
    output logic [1:0] fwd_rs1,      // forward to rs1
    output logic [1:0] fwd_rs2,      // forward to rs2
    output logic       div_stall
);

always_comb begin
    // defaults
    stall     = 1'b0;
    flush     = 1'b0;
    div_stall = 1'b0;
    fwd_rs1   = 2'b00;
    fwd_rs2   = 2'b00;

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

    if (div_en_e && !div_done_e) begin
        div_stall = 1'b1;
    end

    // flush on branch taken
    if (branch_taken) begin
        flush = 1'b1;
    end
end

endmodule
