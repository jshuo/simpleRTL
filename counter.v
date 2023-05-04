module adder_4bit (
    input [3:0] A,
    input [3:0] B,
    input cin,
    output [3:0] sum,
    output cout
);

  wire [4:0] full_sum;

  // Add the input numbers and the carry-in bit, ensuring all operands are 5 bits
  assign full_sum = {A, 1'b0} + {B, 1'b0} + {3'b0, cin};

  // Assign the sum and carry-out outputs
  assign sum = full_sum[3:0];
  assign cout = full_sum[4];

endmodule
