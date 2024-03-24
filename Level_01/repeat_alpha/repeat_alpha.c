#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int count = 0;
	if (ac == 2)
	{
		while (av[1][i] >= 65 && av[1][i] <= 90)
			count = av[1][i] - 64;
		while (av[1][i] >= 97 && av[1][i] <= 122)
			count = av[1][i] - 96;
		while (count)
		{
			write(1, &av[1][i], 1);
			count--;
		}
		count = 1;
		i++;

	}
	write(1, "\n", 1);

}
