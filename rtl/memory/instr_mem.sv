module instr_mem #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH    = 32,     // 32-bit instruction
    parameter SIZE          = 12      // 2^12 words = 4096 words (decided by brief)
)(
    input  logic [ADDRESS_WIDTH-1:0] addr,  // byte address from PC
    output logic [DATA_WIDTH-1:0]    dout
);

    // Instruction memory stores WORDS, not BYTES
    // Total size = 2^SIZE words
    logic [DATA_WIDTH-1:0] mem_array [0:(1 << SIZE) - 1];

    initial begin
        $display("Loading Instruction Memory...");
        $readmemh("../../rtl/memory/instr.mem", mem_array);
        $display("Loaded Instruction Memory!");
    end

    // Convert byte address -> word index
    // Example: addr=0x0000000C -> index = 3
    wire [SIZE-1:0] word_index = addr[SIZE+1:2];

    always_comb begin
        if (word_index >= (1 << SIZE))
            $display("ERROR: PC out of range! PC=%h (index=%0d)", addr, word_index);
    end

    assign dout = mem_array[word_index];

endmodule
