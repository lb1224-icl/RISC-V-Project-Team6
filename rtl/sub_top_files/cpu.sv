module cpu #(
    parameter WIDTH = 32
)(
    input  logic clk
);

    // FETCH -> DECODE
    logic [WIDTH-1:0] pc_f;
    logic [WIDTH-1:0] pc_plus_4f;
    logic [WIDTH-1:0] instr_f;

    // DECODE -> EXECUTE
    logic [WIDTH-1:0] rd1_d, rd2_d;
    logic [WIDTH-1:0] imm_ext_d;
    logic [WIDTH-1:0] pc_d, pc_plus_4d;
    logic [4:0] rs1_d, rs2_d, rd_d;

    logic reg_write_d, mem_write_d;
    logic [1:0] result_src_d;
    logic branch_d, jump_d, alu_src_d;
    logic [2:0] alu_control_d;

    // EXECUTE -> MEMORY
    logic [WIDTH-1:0] alu_result_e;
    logic [WIDTH-1:0] write_data_e;
    logic [WIDTH-1:0] pc_target_e;
    logic zero_e;

    logic reg_write_e, mem_write_e;
    logic [1:0] result_src_e;
    logic [4:0] rd_e;

    // MEMORY -> WRITEBACK
    logic [WIDTH-1:0] read_data_m;
    logic [WIDTH-1:0] alu_result_m;
    logic [WIDTH-1:0] pc_plus_4m;

    logic reg_write_m;
    logic [1:0] result_src_m;
    logic [4:0] rd_m;

    // WRITEBACK OUTPUTS
    logic [WIDTH-1:0] result_w;
    logic reg_write_w;
    logic [1:0] result_src_w;
    logic [4:0] rd_w;

    // Branch / Jump PC Source
    logic pc_src;
    assign pc_src = (branch_d & zero_e) | jump_d;

    fetch fetch (
        .clk(clk),
        .pc_target_ext(pc_target_e),
        .pc_src(pc_src),
        .pc_plus_4f(pc_plus_4f),
        .pc_f(pc_f),
        .ins(instr_f)
    );

    decode decode (
        .instr_i(instr_f),
        .pc_i(pc_f),
        .pc_plus_4_i(pc_plus_4f),

        .rd1_o(rd1_d),
        .rd2_o(rd2_d),
        .imm_ext_o(imm_ext_d),
        .pc_d_o(pc_d),
        .pc_plus_4d_o(pc_plus_4d),

        .rs1_o(rs1_d),
        .rs2_o(rs2_d),
        .rd_o(rd_d),

        .reg_write_o(reg_write_d),
        .mem_write_o(mem_write_d),
        .result_src_o(result_src_d),
        .branch_o(branch_d),
        .jump_o(jump_d),
        .alu_src_o(alu_src_d),
        .alu_control_o(alu_control_d),

        .result_wb_i(result_w),
        .wb_reg_write_i(reg_write_w),
        .wb_rd_i(rd_w)
    );

    execute execute (
        .pc_i(pc_d),
        .pc_plus_4_i(pc_plus_4d),
        .rd1_i(rd1_d),
        .rd2_i(rd2_d),
        .imm_ext_i(imm_ext_d),

        .alu_src_i(alu_src_d),
        .alu_control_i(alu_control_d),
        .branch_i(branch_d),
        .jump_i(jump_d),

        .alu_result_o(alu_result_e),
        .write_data_o(write_data_e),
        .pc_target_o(pc_target_e),
        .zero_o(zero_e),

        .reg_write_i(reg_write_d),
        .mem_write_i(mem_write_d),
        .result_src_i(result_src_d),

        .reg_write_o(reg_write_e),
        .mem_write_o(mem_write_e),
        .result_src_o(result_src_e),
        .rd_o(rd_e)
    );

    memory memory (
        .alu_result_i(alu_result_e),
        .write_data_i(write_data_e),
        .mem_write_i(mem_write_e),
        .pc_plus_4_i(pc_plus_4d),

        .read_data_o(read_data_m),
        .alu_result_o(alu_result_m),
        .pc_plus_4m_o(pc_plus_4m),

        .result_src_i(result_src_e),
        .result_src_o(result_src_m),
        .reg_write_i(reg_write_e),
        .reg_write_o(reg_write_m),

        .rd_i(rd_e),
        .rd_o(rd_m),

        .clk(clk),
        .rst(rst)
    );

    writeback writeback (
        .read_data_i(read_data_m),
        .alu_result_i(alu_result_m),
        .pc_plus_4_i(pc_plus_4m),

        .rd_i(rd_m),
        .reg_write_i(reg_write_m),
        .result_src_i(result_src_m),

        .result_w_o(result_w),
        .rd_w_o(rd_w),
        .reg_write_w_o(reg_write_w),
        .result_src_w_o(result_src_w)
    );

endmodule
