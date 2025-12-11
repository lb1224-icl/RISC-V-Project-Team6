module memory #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    input  logic             mem_valid,
    input  logic [WIDTH-1:0] ex_out_m,
    input  logic [WIDTH-1:0] write_data_m,
    input  logic             mem_write_m,
    input  logic [2:0]       funct3_m,

    output logic             mem_ready,
    output logic [WIDTH-1:0] read_data_m
);

logic [WIDTH-1:0] mem_word;
logic [WIDTH-1:0] store_data;
logic [3:0]       byte_en;
logic [7:0]       selected_byte;
logic [15:0]      selected_half;
logic [1:0]       byte_offset;
logic [4:0]       byte_shift;

assign byte_offset = ex_out_m[1:0];         // position within word (00 ==> [7:0], 01 ==> [15:8], etc.)
assign byte_shift  = {byte_offset, 3'b000}; // byte_offset * 8 (00 ==> 0, 01 ==> 8, etc.)

// byte enables for store instructions (SB/SH/SW)
// example for SB: store byte at address ending in ...10 (byte offset = 2)
// ==> 4'b0001 << 2 = 4'b0100 ==> write only byte 2 of the word
always_comb begin
    case (funct3_m)
        3'b000:  byte_en = 4'b0001 << byte_offset; // SB
        3'b001:  byte_en = 4'b0011 << byte_offset; // SH
        3'b010:  byte_en = 4'b1111;                // SW (assumed aligned)
        default: byte_en = 4'b0000;
    endcase
end

// align store data to the addressed byte lane(s)
// MMU expects data to be aligned
// example: SB at address with byte offset = 2
// write_data_m = 0x000000AA ==> store_data = 0x000000AA << 16 = 0x00AA0000
// byte_en = 4'b0100 ==> only byte 2 gets written with 0xAA
assign store_data = write_data_m << byte_shift;

mmu #(
    .DATA_WIDTH (WIDTH),
    .ADDR_WIDTH (WIDTH)
) u_mmu (
    .clk         (clk),
    .rst         (rst),
    .mem_valid   (mem_valid),
    .mem_we      (mem_write_m),
    .mem_addr    (ex_out_m),
    .mem_w_data  (store_data),
    .mem_byte_en (mem_write_m ? byte_en : 4'b0000),
    .mem_r_data  (mem_word),
    .mem_ready   (mem_ready),
    .cache_hit   () // testbench only
);

// choose and extend read data for load variations
assign selected_byte = mem_word >> byte_shift;
assign selected_half = mem_word >> byte_shift;

always_comb begin
    case (funct3_m)
        3'b000:  read_data_m = {{24{selected_byte[7]}}, selected_byte};  // LB
        3'b001:  read_data_m = {{16{selected_half[15]}}, selected_half}; // LH
        3'b010:  read_data_m = mem_word;                                 // LW
        3'b100:  read_data_m = {24'b0, selected_byte};                   // LBU
        3'b101:  read_data_m = {16'b0, selected_half};                   // LHU
        default: read_data_m = mem_word;
    endcase
end

endmodule
