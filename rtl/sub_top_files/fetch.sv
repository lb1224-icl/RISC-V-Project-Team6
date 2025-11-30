module fetch_stage #(
    parameter WIDTH = 32
)(
    input  logic             clk,
    input  logic             rst,

    // From decode/execute for jumps/branches
    input  logic [WIDTH-1:0] pc_target_ext,
    input  logic             pc_src,          // 0 = PC+4, 1 = branch/jump

    // Outputs to pipeline
    output logic [WIDTH-1:0] pc_plus_4f,
    output logic [WIDTH-1:0] pc_f,
    output logic [WIDTH-1:0] ins
);

    logic [WIDTH-1:0] next_pc;
    logic [WIDTH-1:0] pc_plus_4;

    pc_inc #(.WIDTH(WIDTH)) u_pc_inc (
        .pc     (pc_f),
        .inc_pc (pc_plus_4)
    );

    assign pc_plus_4f = pc_plus_4;

    mux_2 #(.D_WIDTH(WIDTH)) u_pc_mux (
        .in0 (pc_plus_4),       // normal seq next PC
        .in1 (pc_target_ext),   // branch/jump target
        .sel (pc_src),
        .out (next_pc)
    );

    pc_reg #(.WIDTH(WIDTH)) u_pc_reg (
        .clk   (clk),
        .rst   (rst),
        .pc_in (next_pc),
        .pc_out(pc_f)
    );

    instr_mem u_instr_mem (
        .addr (pc_f),
        .dout (ins)
    );

endmodule
