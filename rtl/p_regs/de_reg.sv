module de_register #(
    parameter WIDTH = 32
)(
    input  logic             clk,
    input  logic             stall,
    input  logic             flush,
    
    // control signals from DECODE stage
    input  logic             reg_write_d,
    input  logic [1:0]       result_src_d,
    input  logic             mem_write_d,
    input  logic [3:0]       alu_ctrl_d,
    input  logic             alu_src_d,
    input  logic [2:0]       funct3_d,
    input  logic             jalr_d,
    
    // data from DECODE stage
    input  logic [WIDTH-1:0] rd1_d,
    input  logic [WIDTH-1:0] rd2_d,
    input  logic [WIDTH-1:0] pc_d,
    input  logic [4:0]       rd_d,
    input  logic [WIDTH-1:0] imm_ext_d,
    input  logic [WIDTH-1:0] pc_plus4_d,
    
    // control signals to EXECUTE stage
    output logic             reg_write_e,
    output logic [1:0]       result_src_e,
    output logic             mem_write_e,
    output logic [3:0]       alu_ctrl_e,
    output logic             alu_src_e,
    output logic [2:0]       funct3_e,
    output logic             jalr_e,
    
    // data to EXECUTE stage
    output logic [WIDTH-1:0] rd1_e,
    output logic [WIDTH-1:0] rd2_e,
    output logic [WIDTH-1:0] pc_e,
    output logic [4:0]       rd_e,
    output logic [WIDTH-1:0] imm_ext_e,
    output logic [WIDTH-1:0] pc_plus4_e
);

always_ff @(posedge clk) begin
    if (flush) begin
        reg_write_e  <= '0;
        result_src_e <= '0;
        mem_write_e  <= '0;
        alu_ctrl_e   <= '0;
        alu_src_e    <= '0;
        funct3_e     <= '0;
        jalr_e       <= '0;
    end else if (!stall) begin
        reg_write_e  <= reg_write_d;
        result_src_e <= result_src_d;
        mem_write_e  <= mem_write_d;
        alu_ctrl_e   <= alu_ctrl_d;
        alu_src_e    <= alu_src_d;
        funct3_e     <= funct3_d;
        jalr_e       <= jalr_d;
        rd1_e        <= rd1_d;
        rd2_e        <= rd2_d;
        pc_e         <= pc_d;
        rd_e         <= rd_d;
        imm_ext_e    <= imm_ext_d;
        pc_plus4_e   <= pc_plus4_d;
    end
end

endmodule
