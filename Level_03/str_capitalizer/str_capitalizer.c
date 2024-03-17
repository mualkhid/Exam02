#include <unistd.h>

// int ft_to_lower(char c, char d, int i)
// {
// 	if (c != '\t' && c != ' ' && i != -1)
// 	{
// 		if (d >= 'A' && d <= 'Z')
// 			return(1);
// 	}
// 	return(0);
// }

// int ft_to_upper(char c, char d)
// {
// 	if (c == '\t' && c == ' ')
// 	{
// 		if (d >= 'a' && d <= 'z')
// 			return(1);
// 	}
// 	return(0);
// }

// int main(int ac, char **av)
// {
// 	int i = 0;
// 	int j;
	
// 	if (ac > 1)
// 	{
// 		while (i < ac)
// 		{
// 			i++;
// 			j = 0;
// 			if (av[i][0] >= 'a' && av[i][0] <= 'z')
// 				av[i][0] -= 32;
// 			else if (ft_to_lower(av[i][j - 1], av[i][j], j - 1))
// 				av[i][j] +=32;
// 			else if (ft_to_upper(av[i][j - 1], av[i][j]))
// 				av[i][j] -= 32;
// 			write(1, &av[i][j], 1);
// 			j++;
// 		}
// 	}
// }

// int		ft_to_lower(char c, char d, int i)
// {
// 	if (c != ' ' && c != '\t' && i != -1)
// 	{
// 		if (d >= 'A' && d <= 'Z')
// 			return (1);
// 	}
// 	return (0);
// }

// int		ft_to_upper(char c, char d)
// {
// 	if (c == ' ' || c == '\t')
// 	{
// 		if (d >= 'a' && d <= 'z')
// 			return (1);
// 	}
// 	return (0);
// }

// int		main(int ac, char **av)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	if (ac > 1)
// 	{
// 		while (i < ac)
// 		{
// 			i++;
// 			j = 0;
// 			while (av[i][j] != '\0')
// 			{
// 				if (av[i][0] >= 'a' && av[i][0] <= 'z')
// 					av[i][0] -= 32;
// 				else if (ft_to_lower(av[i][j - 1], av[i][j], j - 1))
// 					av[i][j] += 32;
// 				else if (ft_to_upper(av[i][j - 1], av[i][j]))
// 					av[i][j] -= 32;
// 				write(1, &av[i][j], 1);
// 				j++;
// 			}
// 			write(1, " ", 1);
// 		}
// 	}
// 	else
// 		write(1, "\n", 1);
// 	return (0);
// }


int	ft_to_lower(char c, char d, int i)
{
	if (c != ' ' && c != '\t' && i != -1)
	{
		if (d >= 'A' && d <= 'Z')
			return (1);
	}
	return (0);
}

int	ft_to_upper(char c, char d)
{
	if (c == ' ' || c == '\t')
	{
		if (d >= 'a' && d <= 'z')
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int i;
	int j;

	i = 1; 
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
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
	return (0);
}
