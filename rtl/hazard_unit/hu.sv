module hazard_unit (
    input  logic [4:0] rd_m,
    input  logic [4:0] rd_w,
    input  logic [4:0] rs1_e,
    input  logic [4:0] rs2_e,
    input  logic       rs1_used_e,   // 1 if current EX-stage instruction actually uses rs1
    input  logic       rs2_used_e,   // 1 if current EX-stage instruction actually uses rs2
    input  logic       reg_write_m,
    input  logic       reg_write_w,
    input  logic       load_m,       // 1 if M stage instruction is a load
    input  logic       store_e,      // 1 if E stage instruction is a store
    input  logic       branch_taken,
    output logic       stall,
    output logic       flush,
    output logic       fwd_rs1_m,    // forward to rs1 from MEM stage
    output logic       fwd_rs1_w,    // forward to rs1 from WB stage
    output logic       fwd_rs2_m,    // forward to rs2 from MEM stage
    output logic       fwd_rs2_w,    // forward to rs2 from WB stage
    output logic       fwd_rs1_str,  // forward special for store (if needed)
    output logic       fwd_rs2_str   // forward special for store (if needed)
);

always_comb begin
    // defaults
    stall       = 1'b0;
    flush       = 1'b0;
    fwd_rs1_m   = 1'b0;
    fwd_rs1_w   = 1'b0;
    fwd_rs2_m   = 1'b0;
    fwd_rs2_w   = 1'b0;
    fwd_rs1_str = 1'b0;
    fwd_rs2_str = 1'b0;

    // forwarding priority: MEM stage has highest priority (newest data)
    // RS1 forwarding
    if (rs1_used_e) begin
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs1_e)) begin
            fwd_rs1_m = 1'b1;
        end else if ((rd_w != 5'd0) && reg_write_w && (rd_w == rs1_e)) begin
            fwd_rs1_w = 1'b1;
        end
    end

    // RS2 forwarding
    if (rs2_used_e) begin
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs2_e)) begin
            fwd_rs2_m = 1'b1;
        end else if ((rd_w != 5'd0) && reg_write_w && (rd_w == rs2_e)) begin
            fwd_rs2_w = 1'b1;
        end
    end

    // store-specific forwarding (if store's data or address needs value being loaded)
    // can save a stall by forwarding from alignment registers
    if (store_e && load_m) begin
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs1_e)) begin
            fwd_rs1_str = 1'b1;
        end
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs2_e)) begin
            fwd_rs2_str = 1'b1;
        end
    end

    // load-use stall: if a load is in MEM and EX-stage needs that loaded register now,
    // and memory is synchronous (data not available in time), we must stall
    if (load_m && ((rs1_used_e && rd_m == rs1_e) || (rs2_used_e && rd_m == rs2_e))) begin
        stall = 1'b1;
    end

    // flush on branch taken
    if (branch_taken) begin
        flush = 1'b1;
    end
end

endmodule
