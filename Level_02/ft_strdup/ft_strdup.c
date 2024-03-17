#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i;
	char *dest;
	int len;
	len = ft_strlen(src);
	dest = (char *)malloc(1 * len + 1);
	if (!dest)
		return(NULL);
	while (src[i])
	{
		dest[i] = src[i]
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = (char*)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
