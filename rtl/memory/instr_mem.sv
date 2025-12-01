module instr_mem #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH    = 32,
    parameter SIZE          = 12
)(
    input  logic [ADDRESS_WIDTH-1:0] addr,  // byte address
    output logic [DATA_WIDTH-1:0]    dout
);

logic [DATA_WIDTH-1:0] mem_array [0:(1<<SIZE)-1];

initial begin
    $display("Loading Instruction Memory...");
    $readmemh("../../rtl/memory/instr.mem", mem_array);
    $display("Loaded Instruction Memory!");
end

always_comb begin
    if (addr[SIZE+1:2] >= (1<<SIZE))
        $display("ERROR: PC out of instruction memory range! PC=%h", addr);
end


// Word addressing: PC >> 2
assign dout = mem_array[addr[SIZE+1:2]];

endmodule
