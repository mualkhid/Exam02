// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

int find_char(const char c, const char *s)
{
	while(*s)
	{
		if (*s == c)
			return(1);
		s++;
	}
	return(0);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		if(find_char(*s1, s2) == 1)
			return((char *)s1);
		s1++;
	}
	return(0);
}
