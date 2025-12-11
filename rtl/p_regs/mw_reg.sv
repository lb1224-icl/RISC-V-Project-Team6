module mw_reg #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    
    // control signals from MEM stage
    input  logic             reg_write_m,
    input  logic [1:0]       result_src_m,
    
    // data from MEM stage
    input  logic [WIDTH-1:0] ex_out_m,
    input  logic [WIDTH-1:0] read_data_m,
    input  logic [4:0]       rd_m,
    input  logic [WIDTH-1:0] pc_plus4_m,
    input  logic             cache_stall,

    // control signals to WB stage
    output logic             reg_write_w,
    output logic [1:0]       result_src_w,
    
    // data to WB stage
    output logic [WIDTH-1:0] ex_out_w,
    output logic [WIDTH-1:0] read_data_w,
    output logic [4:0]       rd_w,
    output logic [WIDTH-1:0] pc_plus4_w
);

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        reg_write_w  <= '0;
        result_src_w <= '0;
        ex_out_w     <= '0;
        read_data_w  <= '0;
        rd_w         <= '0;
        pc_plus4_w   <= '0;
    end else if (!cache_stall) begin
        reg_write_w  <= reg_write_m;
        result_src_w <= result_src_m;
        ex_out_w     <= ex_out_m;
        read_data_w  <= read_data_m;
        rd_w         <= rd_m;
        pc_plus4_w   <= pc_plus4_m;
    end
end

endmodule
