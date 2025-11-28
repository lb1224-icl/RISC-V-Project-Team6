module fetch #( //add instruction memory module to this folder
    parameter D_WIDTH = 32, A_WIDTH = 12
)(
    input  logic clk,
    input  logic pc_src_e,
    input  logic [2**A_WIDTH-1:0] pc_target_e,
    output logic [D_WIDTH-1:0] rd,
    output logic [2**A_WIDTH-1:0] pcf,
    output lgoic [2**A_WIDTH-1:0] pc_4f
);

logic [2**A_WIDTH-1:0] pcf_b;
logic [2**A_WIDTH-1:0] pcf_a;
logic [2**A_WIDTH-1:0] pc_4f_o;

mux_2 pc_mux (
    .in0(pc_4f_o),
    .in1(pc_target_e),
    .sel(pc_src_e),
    .out(pcf_b)
)

pc_reg register (
    .clk(clk),
    .pc_in(pcf_b),
    .pc_out(pcf_a)
)

instr_mem memory (
    .addr(pcf_a),
    .dout(rd)
)

pc_inc next_ins (
    .pc(pcf_a),
    .inc_pc(pc_4f_o)
)

assign pcf = pcf_a;
assign pc_4f = pc_4f_o;

endmodule