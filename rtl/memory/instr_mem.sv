////////////////  NEED TO CHECK IF WE ARE OFFSETTING THE INSTR MEMORY IN THIS CODE  \\\\\\\\\\\\\\\\
module instr_mem #(       
    parameter  ADDRESS_WIDTH = 32,
               DATA_WIDTH = 32,
               SIZE = 12,
               OFFSET = 32'hBCF00000
)(
    input logic  [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0]    dout
);

logic [DATA_WIDTH-1:0]  mem_array [OFFSET+2**SIZE-1:OFFSET];

initial begin
    $display("Loading Instruction Memory.");
    $readmemh("instr.mem", mem_array);
end;

assign dout = mem_array [addr+OFFSET];

endmodule
