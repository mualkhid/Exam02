#include <unistd.h>

int		ft_to_lower(char c, char d)
{
	if (c >= 'A' && c <= 'Z')
	{
		if (d != ' ' && d != '\t' && d != '\0')
			return (1);
	}
	return (0);
}

int		ft_to_upper(char c, char d)
{
	if (c >= 'a' && c <= 'z')
	{
		if (d == ' ' || d == '\t' || d == '\0')
			return (1);
	}
	return (0);
}

int		main(int ac, char **av)
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
				if (ft_to_upper(av[i][j], av[i][j + 1]))
					av[i][j] -= 32;
				else if (ft_to_lower(av[i][j], av[i][j + 1]))
					av[i][j] += 32;
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
