module memory #(
    parameter WIDTH = 32
)(
    input  logic [WIDTH-1:0] alu_result_m_i,
    input  logic [WIDTH-1:0] write_data_m,
    input  logic             clk,
    input  logic             reg_write_m,
    input  logic [1:0]       result_src_m_i,
    input  logic [4:0]       rd_m_i,
    input  logic [WIDTH-1:0] pc_plus_4_m_i,
    output logic [WIDTH-1:0] read_data,
    output logic             reg_write_m_o,
    output logic [1:0]       result_src_m_o,
    output logic [4:0]       rd_m_o,
    output logic [WIDTH-1:0] pc_plus_4_m_o
);

ram data_mem (
    .adr         (alu_result_m),
    .write_data  (write_data_m),
    .clk         (clk),
    .write_enable(reg_write_m),
    .read_data   (read_data)
);

endmodule
