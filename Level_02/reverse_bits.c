// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100


unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	int result = 0;
	while(i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--; 
	}
	return(result);

}

// Iteration 1: i = 8, result = 0 * 2 + (170 % 2) = 0 + 0 = 0, octet = 170 / 2 = 85.
// Iteration 2: i = 7, result = 0 * 2 + (85 % 2) = 0 + 1 = 1, octet = 85 / 2 = 42.
// Iteration 3: i = 6, result = 1 * 2 + (42 % 2) = 2 + 0 = 2, octet = 42 / 2 = 21.
// Iteration 4: i = 5, result = 2 * 2 + (21 % 2) = 4 + 1 = 5, octet = 21 / 2 = 10.
// Iteration 5: i = 4, result = 5 * 2 + (10 % 2) = 10 + 0 = 10, octet = 10 / 2 = 5.
// Iteration 6: i = 3, result = 10 * 2 + (5 % 2) = 20 + 1 = 21, octet = 5 / 2 = 2.
// Iteration 7: i = 2, result = 21 * 2 + (2 % 2) = 42 + 0 = 42, octet = 2 / 2 = 1.
// Iteration 8: i = 1, result = 42 * 2 + (1 % 2) = 84 + 1 = 85, octet = 1 / 2 = 0.

