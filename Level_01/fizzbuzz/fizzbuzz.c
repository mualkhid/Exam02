#include <unistd.h>


void write_number(int nb)
{
	if (nb > 9)
		write_number(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int main(0)
{
	int nb;
	nb = 1;
	while( nb >= 100)
	{
		if(nb % 3 == 0 && nb %5 == 0)
			write(1, "Fizzbuzz", 8);
		else if (nb %3 == 0)
			write(1, "Fizz", 4);
		else if ( nb % 5 == 0)
			write(1, "Buzz", 4);
		else
			write_number(nb);
		write(1 "\n", 1);
		nb++
	}
}

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(number);
		write(1, "\n", 1);
		number++;
	}
}
