module bpu #(
    parameter CACHE_SIZE = 16,    // number of cache lines
    parameter ADDR_WIDTH = 32,     // width of the full address
    parameter WIDTH = 32
)(
    input  logic             clk,
    input  logic             rst,
    input  logic [WIDTH-1:0] ins,        
    input  logic [WIDTH-1:0] pc,         
    input  logic [WIDTH-1:0] pc_tu,    
    input  logic [WIDTH-1:0] pcplusimm_tu,
    input  logic             eq,         
    input  logic             jump,  
    input  logic             branch,
    input  logic [WIDTH-1:0] pc_circuit,
    input  logic             branch_predicted_e,

    output logic [WIDTH-1:0] pc_next,
    output logic             branch_predicted,
    output logic             flush_o
);

logic [WIDTH-1:0] pc_tu_o;    ///next pc for flush
logic             branch_en;  ///next pc
logic [WIDTH-1:0] pc_target;
logic             flush;

assign flush_o = flush;

tuu TUU (
    .clk(clk),
    .rst(rst),
    .ins(ins),        ///next pc
    .pc(pc),         ///next pc
    .pc_tu_i(pc_tu),    ///cache
    .pcplusimm_tu(pcplusimm_tu),///cache
    .eq(eq),         ///cache
    .jump(jump),  ///cache
    .branch(branch),
    .branch_predicted_e(branch_predicted_e),
    .pc_tu_o(pc_tu_o),    ///next pc for flush
    .branch_en(branch_en),  ///next pc
    .pc_target(pc_target),   ///next pc
    .flush(flush)
);

npu NPU (
    .pc_circuit(pc_circuit),
    .pc_fetch(pc),
    .flush(flush),
    .pc_tu(pc_tu_o),
    .pcplusimm_tu(pcplusimm_tu),  // Pass execute stage target to npu
    .branch_en(branch_en),
    .pc_target(pc_target),
    .pc_next(pc_next),
    .branch_predicted(branch_predicted)
);

endmodule
