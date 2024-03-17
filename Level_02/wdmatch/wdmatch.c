#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int len = 0; 
	while(s1[len])
		len++;
	while (*s2 && i < len)
	{
		if (*s2 == s1[i])
			i++;
		s2++;
	}
	if (i == len)
		write(1, s1, len);
}

int main(itn ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int i;
	int i2;
	int wdlen;

	i = 0;
	i2 = 0;
	wdlen = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (av[2][i2] != '\0')
			{
				if (av[1][i] == av[2][i2])
				{
					wdlen++;
					break ;
				}
				i2++;
			}
			i++;
		}
		if (wdlen == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
