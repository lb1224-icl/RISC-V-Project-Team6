module control_unit #(
    WIDTH = 32
) (
    input logic  [WIDTH-1:0]  ins,        // entire instruction to decode
    input logic               eq,         // jump/branch condition
    output logic              pc_src,     // pc branches or not
    output logic              result_src, // whether we are taking the result?
    output logic              mem_write,  // write enable for data memory
    output logic [2:0]        alu_ctrl,   // ALU operation: add, sub, OR...
    output logic              alu_src,    // whether 2nd ALU input is a register data or immediate
    output logic [1:0]        imm_src,    // type of ins: R, I, S, B
    output logic              reg_write   // register write enable
);

endmodule 
