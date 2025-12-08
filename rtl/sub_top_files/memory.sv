module memory #(
    parameter WIDTH = 32
)(
    input  logic [WIDTH-1:0] write_data_m,
    input  logic [WIDTH-1:0] alu_result_m,
    input  logic             clk,
    input  logic             mem_write_m,
    input  logic [2:0]       funct3_m,

    output logic [WIDTH-1:0] read_data_m,
);

logic [WIDTH-1:0] fwd_ls_out;

assign reg_write_m_o  = reg_write_m_i;
assign result_src_m_o = result_src_m_i;
assign rd_m_o         = rd_m_i;
assign pc_plus4_m_o   = pc_plus4_m_i;
assign alu_result_m_o = alu_result_m_i;

ram data_mem (
    .adr          (alu_result_m_i),
    .write_data   (fwd_ls_out),
    .clk          (clk),
    .write_enable (mem_write_m),
    .read_data    (read_data)
);

mux_2 fwd_load_store (
    .in0 (write_data_m),
    .in1 (result_w),
    .sel (fwd_ls_w),
    .out (fwd_ls_out)
);

endmodule
