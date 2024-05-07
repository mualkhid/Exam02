// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h>

int repeat_alpha(char c)
{
    int i = 0;
    if (c >= 65 && c <= 90)
        i = c - 64;
    if (c >= 97 && c <= 122)
        i = c - 96;
    return(i);
}

int main(int ac, char **av)
{
    int i = 0;
    int j;
    
    if (ac == 2)
    {
        while(av[1][i])
        {
            j = repeat_alpha(av[1][i]);
            if (j == 0)
                write(1, &av[1][i], 1);
            while (j > 0)
            {
                write(1, &av[1][i], 1);
                j--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
