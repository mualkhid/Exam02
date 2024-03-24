#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>
int main()
{
	printf("%zu\n", ft_strcspn("Munia1234", "0123456789"));
	printf("%zu\n", strcspn("Munia1234", "0123456789"));

}