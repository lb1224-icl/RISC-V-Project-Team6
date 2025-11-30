module reg_file #(
    parameter D_WIDTH = 32, A_WIDTH = 5
) (
    input  logic [A_WIDTH-1:0] ad1,
    input  logic [A_WIDTH-1:0] ad2,
    input  logic [A_WIDTH-1:0] ad3,
    input  logic               we3,
    input  logic [D_WIDTH-1:0] imm_Ext, //imm_op
    input  logic               alu_src,
    input  logic               result_src,
    input  logic [2:0]         alu_ctrl,
    input  logic               clk,
    output logic               zero //eq
);

logic [D_WIDTH-1:0] alu_result;  //aluout
logic [D_WIDTH-1:0] src_a;      //aluop1
logic [D_WIDTH-1:0] src_b;      //aluop2;
logic [D_WIDTH-1:0] write_data; //regop2;
logic [D_WIDTH-1:0] read_data;
logic [D_WIDTH-1:0] result;

reg_file registers (
    .clk(clk),
    .wr_en(we3),
    .wr_addr(ad3),
    .rd1_addr(ad1),
    .rd2_addr(ad2),
    .din(result),
    .dout1(src_a),
    .dout2(write_data),
);

mux_2 imm_mux (
    .in0(write_data),
    .in1(imm_Ext),
    .sel(alusrc),
    .out(src_b)
);

alu ALU (
    .aluop1(src_a),
    .aluop2(src_b),
    .aluctrl(alu_ctrl),
    .aluout(alu_result),
    .eq(zero)
);

mux_2 result_mux (
    .in0(alu_result),
    .in1(read_data),
    .sel(result_src),
    .out(result)
)
endmodule
