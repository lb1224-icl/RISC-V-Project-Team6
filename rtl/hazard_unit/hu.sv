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
    output logic [1:0] fwd_rs1,      // forward to rs1
    output logic [1:0] fwd_rs2,      // forward to rs2
    output logic       fwd_ls        // goes to mw_reg to control store forwaring one cycle later
);

always_comb begin
    // defaults
    stall   = 1'b0;
    flush   = 1'b0;
    fwd_rs1 = 2'b00;
    fwd_rs2 = 2'b00;
    fwd_ls  = 1'b0; // 01 for rs1; 10 for rs2

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

    // store-specific forwarding (if store's data needs value being loaded ==> rs2 only)
    // can save a stall by forwarding from WB stage into MEM stage
    // fwd_ls goes to mw_reg to control muxes for forwardng
    if (store_e && load_m) begin
        if ((rd_m != 5'd0) && reg_write_m && (rd_m == rs2_e)) begin
            fwd_ls = 1'b1;
        end
    end

    // load-use stall: if a load is in MEM and EX-stage needs that loaded register now
    // and memory is synchronous (data not available in time), we must stall
    // ignore stores where rd_m == rs2_e since store data can be forwarded
    if (load_m && ((rs1_used_e && rd_m == rs1_e) || (rs2_used_e && !store_e && rd_m == rs2_e))) begin
        stall = 1'b1;
    end

    // flush on branch taken
    if (branch_taken) begin
        flush = 1'b1;
    end
end

endmodule
