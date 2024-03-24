#include <unistd.h>

int check_doubles(char *str, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void ft_union(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while (str1[i])
	{
		if (check_doubles(str1, str1[i], i) == 1)
			write(1, &str1[i], 1);
		i++;
	}
	while (str2[j])
	{
		if (check_doubles(str1, str2[j], i) && check_doubles(str2, str2[j], j))
			write(1, &str2[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}
