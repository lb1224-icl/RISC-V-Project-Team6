///table update unit
module tuu #(
    parameter WIDTH = 32,
    parameter TABLE_SIZE = 16
) (
    input  logic             clk,
    input  logic [WIDTH-1:0] ins,        ///next pc
    input  logic [WIDTH-1:0] pc,         ///next pc
    input  logic [WIDTH-1:0] pc_tu_i,    ///cache
    input  logic [WIDTH-1:0] pcplusimm_tu,///cache
    input  logic             eq,         ///cache
    input  logic             cu_branch,  ///cache
    output logic [WIDTH-1:0] pc_tu_o,    ///next pc for flush
    output logic             branch_en,  ///next pc
    output logic [WIDTH-1:0] pc_target   ///next pc
);

logic b_or_j;
logic [1:0] state_wr_int1;
logic [1:0] state_wr_int2;
logic hit1;
logic hit2;
assign pc_tu_o = pc_tu_i;
assign branch_en = 0;
assign pc_target = pc;

///Next PC logic
always_comb begin
    b_or_j = (ins[6:0] == 7'b1100011) ||  // BEQ / B-type
             (ins[6:0] == 7'b1101111) ||  // JAL
             (ins[6:0] == 7'b1100111);    // JALR
end

cache bp_cache (
    .clk(clk), //negative edge
    .wr_addr(pc_tu_i),        // full address
    .rd_addr(pc),
    .data_in0(pc_tu_i),   // first 32-bit number
    .data_in1(pcplusimm_tu),   // second 32-bit number
    .data_in2(state_wr_int2),   // 2-bit state
    .write_en(cu_branch),  // write enable
    .data_out1(pc_intermediate), // second 16-bit number output
    .data_out2(state_rd_intermediate), // extra 2-bit output
    .data_out3(state_wr_int1),
    .hit1(hit1),
    .hit2(hit2)
);

mux_2 pc_mux (
    in0(pc),
    in1(pc_intermediate),
    sel(hit1),
    out(pc_target)
)

if (hit1 && state_rd_intermediate == 2'b00) begin
    branch_en = 0;//strongly not taken
end
if (hit1 && state_rd_intermediate == 2'b01) begin
    branch_en = 0;//not taken
end
if (hit1 && state_rd_intermediate == 2'b10) begin
    branch_en = 1;//taken
end
if (hit1 && state_rd_intermediate == 2'b11) begin
    branch_en = 1;//strongly taken
end
if (b_or_j == 0) begin
    assign branch_en = 0;
end

if (!hit2) {
    state = state;
}
else {
    if (eq == 0) {
        if (state == 2'b00 || state == 2'b01) {
            state == 2'b00;
        }
        else if (state == 2'b10) {
            state = 2'b01;
        }
        else if (state == 2'b11) {
            state = 2'b10;
        }
    }
    else {
        if (state == 2'b11 || state == 2'b10) {
            state = 2'b11;
        }
        else if (state == 2'b01) {
            state = 2'b10;
        }
        else if (state == 2'b00) {
            state == 2'b01;
        }
    }
}

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
