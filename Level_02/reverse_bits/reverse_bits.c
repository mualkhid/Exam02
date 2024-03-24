
unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	int result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return(result);
}