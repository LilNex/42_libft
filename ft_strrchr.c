#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *adress;
    i = ft_strlen((char *)s) -1;

    while (s[i] != '\0')
    {
        if (s[i] == c){
            adress = (char *)&s[i];
            return (adress);
        }
        i--;
    }
    return ((char *)'\0');
}