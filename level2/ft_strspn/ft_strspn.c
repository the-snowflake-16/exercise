#include <string.h>
#include <stdio.h>

int ft_find_char(const char *s, int c)
{
    int i = 0;
    while (s[i])
    {
        if(s[i] == c)
            return(1);
        i++;
    }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    // int count = 0;
    while (s[i])
    {
        if(!ft_find_char(accept, s[i]))
            return(i);
        i++;
    }
    return(i); 
}
// int main()
// {
//     char str[] = "helloki";
//     char str2[] = "helloahek";
//     printf("%lu\n", strspn(str, str2));
//     printf("%lu\n", ft_strspn(str, str2));
// }