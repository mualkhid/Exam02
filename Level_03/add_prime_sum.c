// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + '0');
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while(str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result);
}

int ft_is_prime(int nb)
{
	int i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int ft_add_prime_sum(int nb)
{
	int i = 2;
	int result = 0;
	if (nb <= 0)
		return(0);
	while(i <= nb)
	{
		if (ft_is_prime(i))
			result += i;
		i++;
	}
	return(result);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	else	
		write(1, "0", 1);
	write(1, "\n", 1);
}
