#include <stdlib.h>

// int ft_abs(int x)
// {
// 	if (x < 0)
// 		return(-x);
// 	return(x);
// }

// int ft_range(int start, int end)
// {
// 	int i = 0;
// 	int *tab = (int *)malloc(sizeof(int) *ft_abs(start - end) + 1);

// 	while(start < end)
// 	{
// 		tab[i] = start;
// 		start++;
// 		i++;
// 	}
// 	tab[i] = start;
// 	while (start > end)
// 	{
// 		tab[i] = start;
// 		start--;
// 		i++;
// 	}
// 	tab[i] = start;
// 	return(tab);
// }

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}


#include <stdio.h>
int main()
{
	int i = 0;
	int start = 0;
	int end = -3;
	int *tab = ft_range(start, end);
	while (i <= ft_abs(start - end))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	
}
