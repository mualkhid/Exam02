// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $


#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}


int main(int ac, char **av)
{
	int i = 0;
	int len = ft_strlen(av[1]) - 1;
	char tmp;

	if (ac == 2)
	{
		while (i < len)
		{
			tmp = av[1][i];
			av[1][i] = av[1][len];
			av[1][len] = tmp;
			len--;
			i++;
		}
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
