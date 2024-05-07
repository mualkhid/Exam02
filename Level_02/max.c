// Assignment name  : max
// Expected files   : max.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

int max(int *tab, unsigned int len)
{
	int i = 0;
	int tmp;

	while(i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i -= 1;
		}
		i++;
	}
	return(tab[0]);
}
