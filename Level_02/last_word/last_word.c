#include <unistd.h>

void last_word(char *str)
{
	int i= 0;

	while (str[i])
		i++;
	i--;
	while (str[i] == '\t' || str[i] == ' ')
		i--;
	while (i >= 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while (str[i] && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac ,char **av)
{
	if (ac == 2)
		last_word(av[ac - 1]);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i;
	char *lw;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= 32 && av[1][i + 1] > 32)
				lw = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write(1, &lw[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
