module mw_register #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    
    // control signals from MEM stage
    input  logic             reg_write_m,
    input  logic [1:0]       result_src_m,
    
    // data from MEM stage
    input  logic [WIDTH-1:0] alu_result_m,
    input  logic [WIDTH-1:0] read_data_m,
    input  logic [4:0]       rd_m,
    input  logic [WIDTH-1:0] pc_plus4_m,

    // forwarding inputs
    input  logic             fwd_ls_hu, // signal from hazard unit
    
    // control signals to WB stage
    output logic             reg_write_w,
    output logic [1:0]       result_src_w,
    
    // data to WB stage
    output logic [WIDTH-1:0] alu_result_w,
    output logic [WIDTH-1:0] read_data_w,
    output logic [4:0]       rd_w,
    output logic [WIDTH-1:0] pc_plus4_w,

    // forwarding outputs
    output logic             fwd_ls_w
);

always_ff @(posedge clk) begin
    reg_write_w  <= reg_write_m;
    result_src_w <= result_src_m;
    alu_result_w <= alu_result_m;
    rd_w         <= rd_m;
    pc_plus4_w   <= pc_plus4_m;
    read_data_w  <= read_data_m;
end

endmodule
