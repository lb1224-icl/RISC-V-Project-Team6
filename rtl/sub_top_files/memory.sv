module memory #(
    parameter WIDTH = 32
)(
    input  logic             clk,
    input  logic [WIDTH-1:0] alu_result_m_i,
    input  logic [WIDTH-1:0] write_data_m,
    input  logic             mem_write_m,
    input  logic             reg_write_m_i,
    input  logic [1:0]       result_src_m_i,
    input  logic [4:0]       rd_m_i,
    input  logic [WIDTH-1:0] pc_plus4_m_i,

    // forwarding inputs
    input  logic             fwd_ls_w,
    input  logic [WIDTH-1:0] result_w,

    output logic [WIDTH-1:0] read_data,
    output logic             reg_write_m_o,
    output logic [1:0]       result_src_m_o,
    output logic [4:0]       rd_m_o,
    output logic [WIDTH-1:0] pc_plus4_m_o,
    output logic [WIDTH-1:0] alu_result_m_o
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
