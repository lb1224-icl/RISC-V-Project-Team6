module instr_mem #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH    = 32, // instruction width
    parameter SIZE          = 14  // 2^14 bytes = 4096 words (as said by brief)
)(
    input  logic [ADDRESS_WIDTH-1:0] addr, // byte address from PC
    output logic [DATA_WIDTH-1:0]    dout  // 32-bit instruction
);

    // byte-addressable instruction memory
    logic [7:0] mem_array [0:(1 << SIZE) - 1];

    initial begin
        $display("Loading Instruction Memory (byte-addressed)...");
        $readmemh("../../rtl/memory/instr.mem", mem_array);
        $display("Loaded Instruction Memory!");
    end

    // word index = address; PC must be aligned to 4 bytes
    wire [SIZE-1:0] byte_addr = addr;

    always_comb begin
        if (byte_addr + 3 >= (1 << SIZE))
            $display("ERROR: PC out of range! PC=%h", addr);
    end

    // reconstruct 32-bit word (little-endian)
    assign dout = {
        mem_array[byte_addr + 3],
        mem_array[byte_addr + 2],
        mem_array[byte_addr + 1],
        mem_array[byte_addr + 0]
    };

endmodule
