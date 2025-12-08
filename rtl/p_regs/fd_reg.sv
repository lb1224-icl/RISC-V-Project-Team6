module fd_reg #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    input  logic             flush,
    input  logic             stall,
    
    // inputs from FETCH stage
    input  logic [WIDTH-1:0] pc_f,
    input  logic [WIDTH-1:0] pc_plus4_f,
    input  logic [WIDTH-1:0] instr_f, // this arrives one cycle later due to sync read
    
    // outputs to DECODE stage
    output logic [WIDTH-1:0] pc_d,
    output logic [WIDTH-1:0] pc_plus4_d,
    output logic [WIDTH-1:0] instr_d
);

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        pc_d       <= '0;
        pc_plus4_d <= '0;
        instr_d    <= '0;
    end else if (flush) begin
        pc_d       <= '0;
        pc_plus4_d <= '0;
        instr_d    <= '0;
    end else if (!stall) begin
        pc_d       <= pc_f;
        pc_plus4_d <= pc_plus4_f;
        instr_d    <= instr_f;
    end
end

endmodule
