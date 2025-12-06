module reg_file #(
    parameter D_WIDTH = 32,
    parameter ADDRESS_WIDTH = 5
)(
    input  logic                     clk,
    input  logic                     wr_en,
    input  logic [ADDRESS_WIDTH-1:0] a3,   // write register
    input  logic [ADDRESS_WIDTH-1:0] a1,   // read register 1
    input  logic [ADDRESS_WIDTH-1:0] a2,   // read register 2
    input  logic [D_WIDTH-1:0]       din,
    output logic [D_WIDTH-1:0]       dout1,
    output logic [D_WIDTH-1:0]       dout2,
    output logic [D_WIDTH-1:0]       a0
);

logic [D_WIDTH-1:0] ram_array [0:(1<<ADDRESS_WIDTH)-1];

// initialize to zero
initial begin
    for (int i = 0; i < (1<<ADDRESS_WIDTH); i++)
        ram_array[i] = '0;
end

// synchronous write (x0 cannot be written)
always_ff @(negedge clk) begin
    if (wr_en && (a3 != 0))
        ram_array[a3] <= din;
end

// combinational reads
always_comb begin
    dout1 = ram_array[a1];
    dout2 = ram_array[a2];
    a0    = ram_array[10];   // expose a0 for debugging
end

endmodule
