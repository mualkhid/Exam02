// Assignment name  : rstr_capitalizer
// Expected files   : rstr_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or more strings and, for each argument, puts 
// the last character of each word (if it's a letter) in uppercase and the rest
// in lowercase, then displays the result followed by a \n.

// A word is a section of string delimited by spaces/tabs or the start/end of the
// string. If a word has a single letter, it must be capitalized.

// If there are no parameters, display \n.

// Examples:

// $> ./rstr_capitalizer | cat -e
// $
// $> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
// premieR petiT tesT$
// $> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
// deuxiemE tesT uN peU moinS  facilE$
//    attentioN c'esT paS duR quanD memE$
// alleR uN dernieR 0123456789pouR lA routE    E $
// $>

#include <unistd.h>

int ft_to_lower(char c, char d)
{
	if (c >= 'A' && c <= 'Z')
	{
		if (d != ' ' && d != '\t' && d != '\0')
			return(1);
	}
	return(0);
}

int ft_to_upper(char c, char d)
{
	if (c >= 'a' && c <= 'z')
	{
		if (d == ' ' || d == '\t' || d == '\0')
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
				if(ft_to_lower(av[i][j], av[i][j + 1]))
					av[i][j] += 32;
				else if (ft_to_upper(av[i][j], av[i][j + 1]))
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
