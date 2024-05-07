// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring | cat -e
// $
// $>

#include <unistd.h>
#include <stdlib.h>


char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	char **tab = (char **)malloc(sizeof(**tab) * 1000);

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			tab[j] = (char *)malloc(sizeof(char *) * 1000);
			while(str[i] > 32)
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else 
			i++;
	}
	tab[j] = 0;
	return(tab);
}

int main(int ac, char **av)
{
	int i = 1;
	char **tab;
	if (ac == 2)
	{
		tab = ft_split(av[1]);
		while(tab[i])
		{
			ft_putstr(tab[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(tab[0]);
	}
	write(1, "\n", 1);
}
