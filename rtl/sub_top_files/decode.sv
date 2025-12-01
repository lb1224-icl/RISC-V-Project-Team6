module decode #(
    DATA_WIDTH = 32
) (
    input logic                     clk,
    input logic                     zero_e,
    input logic                     reg_write_w,
    input logic [DATA_WIDTH-1:0]    ins,
    input logic [DATA_WIDTH-1:0]    pc_d_i,
    input logic [DATA_WIDTH-1:0]    pc_plus_4d_i,
    input logic [DATA_WIDTH-1:0]    result_w,
    input logic [4:0]               rd_w,

    output logic                    reg_write_d,
    output logic [1:0]              result_src_d,
    output logic                    mem_write_d,
    output logic                    pc_src,
    output logic [3:0]              alu_control_d,
    output logic                    alu_src_d,
    output logic [DATA_WIDTH-1:0]   rd_1,
    output logic [DATA_WIDTH-1:0]   rd_2,
    output logic [DATA_WIDTH-1:0]   pc_d_o,
    output logic [4:0]              rd_d,
    output logic [DATA_WIDTH-1:0]   imm_ext_d,
    output logic [DATA_WIDTH-1:0]   pc_plus_4d_o,
    output logic [DATA_WIDTH-1:0]   a0
);

// Datapaths that just pass through //
assign pc_d_o = pc_d_i;
assign pc_plus_4d_o = pc_plus_4d_i;
assign rd_d = ins[11:7];

// Internal logic //
logic [2:0]     imm_src_d;

control_unit cu (     
    .ins        (ins),
    .eq         (zero_e),
    .pc_src     (pc_src),      
    .result_src (result_src_d),   
    .mem_write  (mem_write_d),   
    .alu_ctrl   (alu_control_d), 
    .alu_src    (alu_src_d),     
    .imm_src    (imm_src_d),      
    .reg_write  (reg_write_d)
);

 reg_file rf (     
    .clk        (clk),
    .wr_en      (reg_write_w),
    .a3         (rd_w),
    .a1         (ins[19:15]),
    .a2         (ins[24:20]),
    .din        (result_w),
    .dout1      (rd_1),
    .dout2      (rd_2),
    .a0         (a0)
);

sign_extend se (     
    .imm_src    (imm_src_d),
    .ins        (ins),
    .imm_op     (imm_ext_d) 
);
    
endmodule
