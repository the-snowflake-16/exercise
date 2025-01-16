#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (*s)
    {
        s++;
        i++;
    }
    return (i); 
}

char    *ft_strrev(char *str)
{
    int i = ft_strlen(str);
    int j = 0;
    i--;
    int temp;
    while (j < i)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
    return (str);  
}

// int main()
// {
//     char str[] = "";
//     printf("%s ", ft_strrev(str));
// }