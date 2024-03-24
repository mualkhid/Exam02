#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    while (av[1][i] != '\0')
    {
        if (av[1][i] > 64 && av[1][i] < 91)
        {
            av[1][i] = 90 - av[1][i] + 65;
        } 
        else if (av[1][i] > 96 && av[1][i] < 123)
        {
            av[1][i] = 122- av[1][i] + 97;
        }
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}