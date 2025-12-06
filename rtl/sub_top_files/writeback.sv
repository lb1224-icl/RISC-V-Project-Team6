module writeback # (
    parameter D_WIDTH = 32
) (
    input  logic               reg_write_w_i, // we3
    input  logic [1:0]         result_src_w, 
    input  logic [D_WIDTH-1:0] alu_result_w,
    input  logic [D_WIDTH-1:0] read_data_w,
    input  logic [4:0]         rd_w_i,
    input  logic [D_WIDTH-1:0] pc_plus4_w,

    // forwarding inputs
    input logic                fwd_ls_w_i,

    output logic               reg_write_w_o,
    output logic [4:0]         rd_w_o,
    output logic [D_WIDTH-1:0] result_w,

    // forwarding outputs
    output logic               fwd_ls_w_o
);

assign reg_write_w_o = reg_write_w_i;
assign rd_w_o        = rd_w_i;

mux_4 writeback_mux (
    .in0 (alu_result_w),
    .in1 (read_data_w),
    .in2 (pc_plus4_w),
    .in3 (32'b0),
    .sel (result_src_w),
    .out (result_w)
);

endmodule
