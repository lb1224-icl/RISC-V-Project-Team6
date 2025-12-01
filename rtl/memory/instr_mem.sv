module instr_mem #(
    parameter  ADDRESS_WIDTH = 32,
               DATA_WIDTH = 32,
               SIZE = 12
)(
    input logic  [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0]    dout
);

logic [DATA_WIDTH-1:0]  mem_array [2**SIZE-1:0];

initial begin
    $display("Loading Instruction Memory.");
    $readmemh("../../rtl/memory/instr.mem", mem_array);
    $display("Loaded Instruction Memory!");
end

assign dout = mem_array [addr];

endmodule
