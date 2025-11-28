module pc_reg #(
    parameter D_WIDTH = 32
) (
    input  logic               clk,
    input  logic [D_WIDTH-1:0] pc_in,
    output logic [D_WIDTH-1:0] pc_out
);

always_ff @(posedge clk) begin
    pc_out <= pc_in;
end

endmodule