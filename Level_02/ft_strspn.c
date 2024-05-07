// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);
 

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if (*s == c)
			return((char *)s);
		s++;
	}
	return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while(*s)
	{
		if (ft_strchr(s, accept[i]) == 0)
			break;
		s++;
	}
	return(i);
}
