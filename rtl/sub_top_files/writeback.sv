module writeback # (
    parameter D_WIDTH = 32
) (
    input  logic [1:0]         result_src_w, 
    input  logic [D_WIDTH-1:0] alu_result_w,
    input  logic [D_WIDTH-1:0] read_data_w,
    input  logic [D_WIDTH-1:0] pc_plus4_w,

    output logic [D_WIDTH-1:0] result_w
);

mux_4 writeback_mux (
    .in0 (alu_result_w),
    .in1 (read_data_w),
    .in2 (pc_plus4_w),
    .in3 (32'b0),
    .sel (result_src_w),
    .out (result_w)
); 

endmodule
