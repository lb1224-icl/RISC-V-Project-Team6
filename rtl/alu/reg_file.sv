module reg_file #(
    parameter D_WIDTH = 32, ADDRESS_WIDTH = 5
)(
    input  logic                     clk,
    input  logic                     wr_en,
    input  logic [ADDRESS_WIDTH-1:0] a3,
    input  logic [ADDRESS_WIDTH-1:0] a1,
    input  logic [ADDRESS_WIDTH-1:0] a2,
    input  logic [D_WIDTH-1:0]       din,
    output logic [D_WIDTH-1:0]       dout1,
    output logic [D_WIDTH-1:0]       dout2
);

localparam int DEPTH = 1 << ADDRESS_WIDTH;

(*verilator public_flat*)
logic [D_WIDTH-1:0] ram_array [0:DEPTH-1];

initial begin
    // Initialize register file to zero for deterministic simulation
    integer i;
    for (i = 0; i < (2**ADDRESS_WIDTH); i = i + 1) begin
        ram_array[i] = '0;
    end
end

always_ff @(negedge clk) begin
    // synchronous write only; reads are provided combinationally below
    // do not allow writes to x0 (address 0)
    if (wr_en == 1'b1 && a3 != {ADDRESS_WIDTH{1'b0}})
        begin
            ram_array[a3] <= din;
        end
end

// combinational read ports so single-cycle logic can use register values
always_comb begin
    dout1 = ram_array[a1];
    dout2 = ram_array[a2];
end
endmodule
