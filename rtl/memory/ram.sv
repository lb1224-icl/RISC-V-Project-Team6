module ram #(
    parameter WIDTH = 32, DATA_WIDTH = 8, SIZE = 17
) (
    input  logic [WIDTH-1:0] addr,
    input  logic [WIDTH-1:0] write_data,
    input  logic             clk,
    input  logic             write_enable,
    input  logic [3:0]       byte_en,
    output logic [WIDTH-1:0] read_data
);

logic [DATA_WIDTH-1:0] data_array [2**SIZE-1:0];

wire [16:0] index = addr[16:0];

initial begin
    for (int i = 0; i < 2**SIZE; i++) begin
        data_array[i] = '0;
    end
    // load input data starting at address 0x10000 as defined in tb/asm/5_pdf.s
    $display("Loading Data Memory (byte-addressed) from data.hex...");
    $readmemh("data.hex", data_array, 17'h10000);
end

assign read_data = {
    data_array[index + 3],
    data_array[index + 2],
    data_array[index + 1],
    data_array[index + 0]
};

always_ff @(posedge clk) begin
    if(write_enable == 1'b1) begin
        if (byte_en[0]) data_array[index + 0] <= write_data[7:0];
        if (byte_en[1]) data_array[index + 1] <= write_data[15:8];
        if (byte_en[2]) data_array[index + 2] <= write_data[23:16];
        if (byte_en[3]) data_array[index + 3] <= write_data[31:24];
    end
end   

endmodule
