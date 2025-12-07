module memory #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic [WIDTH-1:0] write_data_m,
    input  logic             mem_write_m,

    // forwarding inputs
    input  logic             fwd_ls_w,
    input  logic [WIDTH-1:0] result_w,

    output logic [WIDTH-1:0] read_data_m
);

logic [WIDTH-1:0] fwd_ls_out;

ram data_mem (
    .adr          (alu_result_m_i),
    .write_data   (fwd_ls_out),
    .clk          (clk),
    .write_enable (mem_write_m),
    .read_data    (read_data_m)
);

mux_2 fwd_load_store (
    .in0 (write_data_m),
    .in1 (result_w),
    .sel (fwd_ls_w),
    .out (fwd_ls_out)
);

endmodule
