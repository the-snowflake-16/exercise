#include <unistd.h>
#include <stdio.h>
int ft_isdigit(char *s)
{
    int i = 0;
    if(*s == '\0')
        return (0);
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return(0);
        i++;
    }
     return (1);  
}
int ft_isint(char *s)
{
    if (ft_isdigit(s))
    {
        int i = 0;
        int res = 0;
        while (s[i])
        {
            res *= 10;
            res = res + s[i] - '0';
            i++;
        }
    return(res); 
    }
    return(0);
}

void ft_putnb(int nb)
{
    if (nb > 9)
    {
        ft_putnb(nb / 10);
        nb %= 10;
    }
    nb = nb + '0';
    write(1, &nb, 1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int res = 0;
        int nb = ft_isint(argv[1]);
        if (nb < 0)
            return (0);
        while (nb > 0)
        {
            if(nb % 2 != 0 && nb > 2)
                res += nb;
            else if (nb == 2)
            {
                res += 2;
            }
            
            nb--;
        }
        ft_putnb(res);
    }
    write(1, "\n", 1);
}