#include <unistd.h>
#include <stdlib.h>
//There are 2 versions of the answer


//Version 1
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

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = (char**)malloc(sizeof(char) * 100);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * 100);
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int		main(int ac, char **av)
{
	int i;
	char **tab;

	i = 1;
	if (ac > 1)
	{
		tab = ft_split(av[1]);
		while (tab[i])
		{
			ft_putstr(tab[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(tab[0]);
	}
	write(1, "\n", 1);
	return (0);
}



//Version 2
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    int flag;

    flag = 0;
    if (argc > 1 && argv[1][0])
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i]) 
        {
            while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ') || (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
                i++; 
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1; 
            write(1, &argv[1][i], 1);
            i++;
        }
        if (flag)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
