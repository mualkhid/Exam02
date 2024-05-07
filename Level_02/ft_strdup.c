// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdlib.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src) + 1;
	char *dest = (char *)malloc(sizeof(char) * len);
	
	if (!dest)
		return(NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
