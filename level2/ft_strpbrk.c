#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        const char *s2_p = s2;
        while (*s2_p)
        {
            if(*s1 == *s2_p)
                return((char *)s1);
            s2_p++;
        }
        s1++;
    }
    return(NULL);
}