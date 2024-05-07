// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 128;

	while(i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet %= i;
			i /= 2;
		}
		else
		{
			write(1, "0", 1);
			i /= 2;
		}
	}
}

// Iteration 1: i = 128, octet >= i, so it prints "1", octet becomes octet % i = 42, i becomes 64.
// Iteration 2: i = 64, octet >= i, so it prints "1", octet becomes octet % i = 10, i becomes 32.
// Iteration 3: i = 32, octet < i, so it prints "0", i becomes 16.
// Iteration 4: i = 16, octet >= i, so it prints "1", octet becomes octet % i = 10, i becomes 8.
// Iteration 5: i = 8, octet < i, so it prints "0", i becomes 4.
// Iteration 6: i = 4, octet >= i, so it prints "1", octet becomes octet % i = 2, i becomes 2.
// Iteration 7: i = 2, octet >= i, so it prints "1", octet becomes octet % i = 0, i becomes 1.
// Iteration 8: i = 1, octet < i, so it prints "0", i becomes 0.

