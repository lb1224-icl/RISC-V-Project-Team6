///table update unit
module tuu #(
    parameter WIDTH = 32,
    parameter TABLE_SIZE = 16
) (
    input  logic             clk,
    input  logic             rst,
    input  logic [WIDTH-1:0] ins,        ///next pc
    input  logic [WIDTH-1:0] pc,         ///next pc
    input  logic [WIDTH-1:0] pc_tu_i,    ///cache
    input  logic [WIDTH-1:0] pcplusimm_tu,///cache
    input  logic             eq,         ///cache
    input  logic             cu_branch,  ///cache
    input  logic             branch_predicted_e,
    output logic [WIDTH-1:0] pc_tu_o,    ///next pc for flush
    output logic             branch_en,  ///next pc
    output logic [WIDTH-1:0] pc_target,   ///next pc
    output logic             flush
);

logic b_or_j;
logic [1:0] state_wr_int1;
logic [1:0] next_state;
logic [1:0] state_rd_intermediate;
logic hit1;
logic hit2;

logic [WIDTH-1:0] pc_intermediate;

///flush decider (fd.sv)
fd FD(
    .eq(eq),
    .branch_predicted(branch_predicted_e),
    .flush(flush)
);

assign pc_tu_o = pc_tu_i;

///Next PC logic
always_comb begin
    b_or_j = (ins[6:0] == 7'b1100011) ||  // BEQ / B-type
             (ins[6:0] == 7'b1101111) ||  // JAL
             (ins[6:0] == 7'b1100111);    // JALR
end

cache bp_cache (
    .clk(clk), //negative edge
    .reset(rst),
    .wr_addr(pc_tu_i),        // full address
    .rd_addr(pc),
    .data_in0(pc_tu_i),   // first 32-bit number
    .data_in1(pcplusimm_tu),   // second 32-bit number
    .data_in2(next_state),   // 2-bit state
    .write_en(cu_branch),  // write enable
    .data_out1(pc_intermediate), // second 16-bit number output
    .data_out2(state_rd_intermediate), // extra 2-bit output
    .data_out3(state_wr_int1),
    .hit1(hit1),
    .hit2(hit2)
);

mux_2 pc_mux (
    .in0(pc),
    .in1(pc_intermediate),
    .sel(hit1),
    .out(pc_target)
);

assign branch_en = (b_or_j && hit1) ? state_rd_intermediate[1] : 1'b0;

always_comb begin
    next_state = state_wr_int1; // no update
    if (cu_branch) begin
        if (!hit2) begin
            case (eq)
                1'b0: next_state = 2'b01;
                1'b1: next_state = 2'b10;
            endcase
        end
        else begin
            if (!eq) begin // NOT TAKEN
                case (state_wr_int1)
                    2'b00: next_state = 2'b00;
                    2'b01: next_state = 2'b00;
                    2'b10: next_state = 2'b01;
                    2'b11: next_state = 2'b10;
                endcase
            end 
            else begin // TAKEN
                case (state_wr_int1)
                    2'b00: next_state = 2'b01;
                    2'b01: next_state = 2'b10;
                    2'b10: next_state = 2'b11;
                    2'b11: next_state = 2'b11;
                endcase
            end
        end
    end
end

///if b_or_j == 1, look through cache to find PC tag entry
///if it exists, set branch_en to whatever the cashe entry enable is
///and set pc_target to whatever is in the cache
///if not, set branch_en to low
///and set pc_target to pc

///table update logic
///if cu_branch is high
///check pc_tu_i
///if pc_tu_i is in the table
///update state in cache according to eq (actual branch taken)
///if pc_tu_i is not in the table
///change the entry of PC_tu_i tag with pc_tu_i, pc_imm_tu, valid, and state (eq)


endmodule
