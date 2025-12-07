module em_register #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    
    // control signals from EXECUTE stage
    input  logic             reg_write_e,
    input  logic [1:0]       result_src_e,
    input  logic             mem_write_e,
    
    // data from EXECUTE stage
    input  logic [WIDTH-1:0] alu_result_e,
    input  logic [WIDTH-1:0] write_data_e,
    input  logic [4:0]       rd_e,
    input  logic [WIDTH-1:0] pc_plus4_e,
    
    // control signals to MEM stage
    output logic             reg_write_m,
    output logic [1:0]       result_src_m,
    output logic             mem_write_m,
    
    // data to MEM stage
    output logic [WIDTH-1:0] alu_result_m,
    output logic [WIDTH-1:0] write_data_m,
    output logic [4:0]       rd_m,
    output logic [WIDTH-1:0] pc_plus4_m
);

always_ff @(posedge clk) begin
    reg_write_m  <= reg_write_e;
    result_src_m <= result_src_e;
    mem_write_m  <= mem_write_e;
    alu_result_m <= alu_result_e;
    write_data_m <= write_data_e;
    rd_m         <= rd_e;
    pc_plus4_m   <= pc_plus4_e;
end

endmodule
