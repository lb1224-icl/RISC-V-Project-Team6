module ram #(
    parameter WIDTH = 32, DATA_WIDTH = 8, SIZE = 17
)(
    input  logic [WIDTH-1:0] adr,
    input  logic [WIDTH-1:0] write_data,
    input  logic             clk,
    input  logic             write_enable,
    output logic [WIDTH-1:0] read_data
);

logic [DATA_WIDTH-1:0] data_array [2**SIZE-1:0];

wire [16:0] index = adr[16:0];

assign read_data = {
    data_array[index + 3],
    data_array[index + 2],
    data_array[index + 1],
    data_array[index + 0]
};

always_ff @(posedge clk) begin
    if(write_enable == 1'b1) begin
        data_array[index + 0] <= write_data[7:0];
        data_array[index + 1] <= write_data[15:8];
        data_array[index + 2] <= write_data[23:16];
        data_array[index + 3] <= write_data[31:24];
    end
end   

endmodule
