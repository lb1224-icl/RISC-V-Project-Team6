module cpu #(
    parameter WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    output logic  [WIDTH-1:0] a0
);

    logic [WIDTH-1:0] pc_f;
    logic [WIDTH-1:0] pc_plus_4f;
    logic [WIDTH-1:0] ins;

    logic                    reg_write_d;
    logic [1:0]              result_src_d;
    logic                    mem_write_d;
    logic                    pc_src;
    logic [3:0]              alu_control_d;
    logic                    alu_src_d;
    logic [WIDTH-1:0]        rd_1;
    logic [WIDTH-1:0]        rd_2;
    logic [WIDTH-1:0]        pc_d_o;
    logic [4:0]              rd_d;
    logic [WIDTH-1:0]        imm_ext_d;
    logic [WIDTH-1:0]        pc_plus_4d_o;

    logic                    zero_e;
    logic                    reg_write_e_o;
    logic [1:0]              result_src_e_o;
    logic                    mem_write_e_o;
    logic [WIDTH-1:0]        alu_result_e;
    logic [WIDTH-1:0]        write_data_e;
    logic [4:0]              rd_e_o;
    logic [WIDTH-1:0]        pc_plus_4e_o;
    logic [WIDTH-1:0]        pc_target_e;

    logic [WIDTH-1:0]        read_data_m;
    logic                    reg_write_m_o;
    logic [1:0]              result_src_m_o;
    logic [4:0]              rd_m_o;
    logic [WIDTH-1:0]        pc_plus_4_m_o;
    logic [WIDTH-1:0]        alu_result_m_o;

    logic                    reg_write_w_o;
    logic [4:0]              rd_w_o;
    logic [WIDTH-1:0]        result_w;

    fetch #(.WIDTH(WIDTH)) u_fetch (
        .clk(clk),
        .rst(rst),
        .pc_target_ext(pc_target_e),
        .pc_src(pc_src),
        .pc_plus_4f(pc_plus_4f),
        .pc_f(pc_f),
        .ins(ins)
    );

    decode #(.DATA_WIDTH(WIDTH)) u_decode (
        .clk(clk),
        .zero_e(zero_e),
        .reg_write_w(reg_write_w_o),
        .ins(ins),
        .pc_d_i(pc_f),
        .pc_plus_4d_i(pc_plus_4f),
        .result_w(result_w),
        .rd_w(rd_w_o),
        .reg_write_d(reg_write_d),
        .result_src_d(result_src_d),
        .mem_write_d(mem_write_d),
        .pc_src(pc_src),
        .alu_control_d(alu_control_d),
        .alu_src_d(alu_src_d),
        .rd_1(rd_1),
        .rd_2(rd_2),
        .pc_d_o(pc_d_o),
        .rd_d(rd_d),
        .imm_ext_d(imm_ext_d),
        .pc_plus_4d_o(pc_plus_4d_o),
        .a0(a0)
    );

    execute #(.D_WIDTH(WIDTH)) u_execute (
        .reg_write_e_i(reg_write_d),
        .result_src_e_i(result_src_d),
        .mem_write_e_i(mem_write_d),
        .alu_ctrl_e(alu_control_d),
        .alu_src_e(alu_src_d),
        .rd1_e(rd_1),
        .rd2_e(rd_2),
        .pc_e(pc_d_o),
        .rd_e_i(rd_d),
        .imm_ext_e(imm_ext_d),
        .pc_plus_4e_i(pc_plus_4d_o),
        .zero_e(zero_e),
        .reg_write_e_o(reg_write_e_o),
        .result_src_e_o(result_src_e_o),
        .mem_write_e_o(mem_write_e_o),
        .alu_result(alu_result_e),
        .write_data_e(write_data_e),
        .rd_e_o(rd_e_o),
        .pc_plus_4e_o(pc_plus_4e_o),
        .pc_target_e(pc_target_e)
    );

    memory #(.WIDTH(WIDTH)) u_memory (
        .alu_result_m_i(alu_result_e),
        .write_data_m(write_data_e),
        .clk(clk),
        .mem_write_m(mem_write_e_o),
        .reg_write_m_i(reg_write_e_o),
        .result_src_m_i(result_src_e_o),
        .rd_m_i(rd_e_o),
        .pc_plus_4_m_i(pc_plus_4e_o),
        .read_data(read_data_m),
        .reg_write_m_o(reg_write_m_o),
        .result_src_m_o(result_src_m_o),
        .rd_m_o(rd_m_o),
        .pc_plus_4_m_o(pc_plus_4_m_o),
        .alu_result_m_o(alu_result_m_o)
    );

    writeback #(.D_WIDTH(WIDTH)) u_writeback (
        .reg_write_w_i(reg_write_m_o),
        .result_src_w(result_src_m_o),
        .alu_result_w(alu_result_m_o),
        .read_data_w(read_data_m),
        .rd_w_i(rd_m_o),
        .pc_plus4(pc_plus_4_m_o),
        .reg_write_w_o(reg_write_w_o),
        .rd_w_o(rd_w_o),
        .result_w(result_w)
    );

    always_ff @(posedge clk) begin
        if (!rst) begin
            $display("INST @ PC=%h : %h", pc_f, ins);
        end
    end

endmodule
