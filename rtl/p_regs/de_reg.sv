module de_reg #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    input  logic             stall,
    input  logic             flush,
    
    // control signals from DECODE stage
    input  logic             reg_write_d,
    input  logic [1:0]       result_src_d,
    input  logic             mem_write_d,
    input  logic             jump_d,
    input  logic             branch_d,
    input  logic [3:0]       alu_ctrl_d,
    input  logic             alu_src_d,
    input  logic [2:0]       funct3_d,
    input  logic             jalr_d,
    input  logic             op1_pc_d,
    input  logic             rs1_used_d,
    input  logic             rs2_used_d,
    
    // data from DECODE stage
    input  logic [WIDTH-1:0] rd1_d,
    input  logic [WIDTH-1:0] rd2_d,
    input  logic [WIDTH-1:0] pc_d,
    input  logic [4:0]       rd_d,
    input  logic [4:0]       rs1_d,
    input  logic [4:0]       rs2_d,
    input  logic [WIDTH-1:0] imm_ext_d,
    input  logic [WIDTH-1:0] pc_plus4_d,

    input  logic [1:0]       mul_ctrl_d,
    input  logic [1:0]       div_ctrl_d,
    input  logic             mul_en_d,
    input  logic             div_en_d,
    input  logic             div_stall,
    input  logic             cache_stall_m,
    
    // control signals to EXECUTE stage
    output logic             reg_write_e,
    output logic [1:0]       result_src_e,
    output logic             mem_write_e,
    output logic             jump_e,
    output logic             branch_e,
    output logic [3:0]       alu_ctrl_e,
    output logic             alu_src_e,
    output logic [2:0]       funct3_e,
    output logic             jalr_e,
    output logic             op1_pc_e,
    
    // data to EXECUTE stage
    output logic [WIDTH-1:0] rd1_e,
    output logic [WIDTH-1:0] rd2_e,
    output logic [WIDTH-1:0] pc_e,
    output logic [4:0]       rd_e,
    output logic [4:0]       rs1_e,
    output logic [4:0]       rs2_e,
    output logic [WIDTH-1:0] imm_ext_e,
    output logic [WIDTH-1:0] pc_plus4_e,

    //control signals to hazard unit
    output logic             rs1_used_e,
    output logic             rs2_used_e,

    output logic [1:0]       mul_ctrl_e,
    output logic [1:0]       div_ctrl_e,
    output logic             mul_en_e,
    output logic             div_en_e
);

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        reg_write_e  <= '0;
        result_src_e <= '0;
        mem_write_e  <= '0;
        jump_e       <= '0;
        branch_e     <= '0;
        alu_ctrl_e   <= '0;
        alu_src_e    <= '0;
        funct3_e     <= '0;
        jalr_e       <= '0;
        op1_pc_e     <= '0;
        rd1_e        <= '0;
        rd2_e        <= '0;
        pc_e         <= '0;
        rd_e         <= '0;
        rs1_e        <= '0;
        rs2_e        <= '0;
        imm_ext_e    <= '0;
        pc_plus4_e   <= '0;
        rs1_used_e   <= '0;
        rs2_used_e   <= '0;
        mul_ctrl_e   <= '0;
        div_ctrl_e   <= '0;
        mul_en_e     <= '0;
        div_en_e     <= '0;
    end else if (flush) begin
        reg_write_e  <= '0;
        result_src_e <= '0;
        mem_write_e  <= '0;
        jump_e       <= '0;
        branch_e     <= '0;
        alu_ctrl_e   <= '0;
        alu_src_e    <= '0;
        funct3_e     <= '0;
        jalr_e       <= '0;
        op1_pc_e     <= '0;
        rd1_e        <= '0;
        rd2_e        <= '0;
        pc_e         <= '0;
        rd_e         <= '0;
        rs1_e        <= '0;
        rs2_e        <= '0;
        imm_ext_e    <= '0;
        pc_plus4_e   <= '0;
        rs1_used_e   <= '0;
        rs2_used_e   <= '0;
        mul_ctrl_e   <= '0;
        div_ctrl_e   <= '0;
        mul_en_e     <= '0;
        div_en_e     <= '0;
    end else if (stall) begin
        // insert bubble into EX stage
        reg_write_e  <= '0;
        result_src_e <= '0;
        mem_write_e  <= '0;
        jump_e       <= '0;
        branch_e     <= '0;
        alu_ctrl_e   <= '0;
        alu_src_e    <= '0;
        funct3_e     <= '0;
        jalr_e       <= '0;
        op1_pc_e     <= '0;
        rd1_e        <= '0;
        rd2_e        <= '0;
        pc_e         <= '0;
        rd_e         <= '0;
        rs1_e        <= '0;
        rs2_e        <= '0;
        imm_ext_e    <= '0;
        pc_plus4_e   <= '0;
        rs1_used_e   <= '0;
        rs2_used_e   <= '0;
        mul_ctrl_e   <= '0;
        div_ctrl_e   <= '0;
        mul_en_e     <= '0;
        div_en_e     <= '0;
    end else if (!div_stall && !cache_stall_m) begin
        reg_write_e  <= reg_write_d;
        result_src_e <= result_src_d;
        mem_write_e  <= mem_write_d;
        jump_e       <= jump_d;
        branch_e     <= branch_d;
        alu_ctrl_e   <= alu_ctrl_d;
        alu_src_e    <= alu_src_d;
        funct3_e     <= funct3_d;
        jalr_e       <= jalr_d;
        op1_pc_e     <= op1_pc_d;
        rd1_e        <= rd1_d;
        rd2_e        <= rd2_d;
        pc_e         <= pc_d;
        rd_e         <= rd_d;
        rs1_e        <= rs1_d;
        rs2_e        <= rs2_d;
        imm_ext_e    <= imm_ext_d;
        pc_plus4_e   <= pc_plus4_d;
        rs1_used_e   <= rs1_used_d;
        rs2_used_e   <= rs2_used_d;
        mul_ctrl_e   <= mul_ctrl_d;
        div_ctrl_e   <= div_ctrl_d;
        mul_en_e     <= mul_en_d;
        div_en_e     <= div_en_d;
    end
end

endmodule
