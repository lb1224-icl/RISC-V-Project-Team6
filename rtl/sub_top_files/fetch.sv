module fetch #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    input  logic             stall,
    input  logic             div_stall,
    input  logic             cache_stall,

    // from EXECUTE stage for jumps/branches
    input  logic [WIDTH-1:0] pc_target_e,
    input  logic             pc_src_e, // 0 = PC + 4, 1 = branch/jump

    input  logic             zero_e,
    input  logic             jump_e,
    input  logic             branch_e,
    input  logic [WIDTH-1:0] pc_e,
    input  logic             bp_e, /// passes through pipeline

    // outputs to pipeline
    output logic [WIDTH-1:0] pc_plus4_f,
    output logic [WIDTH-1:0] pc_f,
    output logic [WIDTH-1:0] instr_f,

    output logic             bp_f,
    output logic             flush
);

logic [WIDTH-1:0] next_pc;
logic [WIDTH-1:0] pc_plus4;
logic [WIDTH-1:0] pc_circuit;

assign pc_plus4_f = pc_plus4;

pc_inc #(.WIDTH(WIDTH)) u_pc_inc (
    .pc     (pc_f),
    .inc_pc (pc_plus4)
);

mux_2 #(.D_WIDTH(WIDTH)) u_pc_mux (
    .in0 (pc_plus4),    // normal seq next PC
    .in1 (pc_target_e), // branch/jump target
    .sel (pc_src_e),
    .out (pc_circuit)
);

pc_reg #(.WIDTH(WIDTH)) u_pc_reg (
    .clk         (clk),
    .rst         (rst),
    .stall       (stall),
    .div_stall   (div_stall),
    .cache_stall (cache_stall),
    .pc_in       (next_pc),
    .pc_out      (pc_f)
);

instr_mem u_instr_mem (
    .addr (pc_f),
    .dout (instr_f)
);

bpu branch_predictor (
    .clk                (clk),
    .rst                (rst),
    .ins                (instr_f),
    .pc                 (pc_f),
    .pc_tu              (pc_e),
    .pcplusimm_tu       (pc_target_e),
    .eq                 (zero_e),
    .jump               (jump_e),
    .branch             (branch_e),
    .pc_circuit         (pc_circuit),
    .branch_predicted_e (bp_e),

    .pc_next            (next_pc),
    .branch_predicted   (bp_f),
    .flush_o            (flush)
);

endmodule
