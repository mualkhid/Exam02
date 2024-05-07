// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.

// Example:

// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "Premier PETIT TesT" | cat -e
// Premier Petit Test$
// $> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
// Deuxieme Test Un Peu Moins  Facile$
//    Attention C'est Pas Dur Quand Meme$
// Aller Un Dernier 0123456789pour La Route    E $
// $>

#include <unistd.h>

int ft_to_lower(char c, char d, int i)
{
	if (c != ' ' && c != '\t' && i != -1)
	{
		if (d >= 'A' && d <= 'Z')
			return(1);
	}
	return(0);
}

int ft_to_upper(char c, char d)
{
	if (c == ' ' || c == '\t')
	{
		if (d >= 'a' && d <= 'z')
			return(1);
	}
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac > 1)
	{
		while(i < ac)
		{
			while(av[i][j])
			{
				if (j == 0 && av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] -= 32;
				else if (j > 0 && ft_to_lower(av[i][j - 1], av[i][j], j - 1))
					av[i][j] += 32;
				else if (j > 0 && ft_to_upper(av[i][j - 1], av[i][j]))
					av[i][j] -= 32;
				write(1, &av[i][j], 1);
				j++; 
			}
			write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
