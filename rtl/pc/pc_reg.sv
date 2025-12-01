module pc_reg #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    input  logic [WIDTH-1:0] pc_in,
    output logic [WIDTH-1:0] pc_out
);

always_ff @(posedge clk, posedge rst) begin
    if (rst)
        pc_out <= 0;
    else
        pc_out <= pc_in;
end

endmodule
