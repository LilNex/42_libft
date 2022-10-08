#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *adress;
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c){
            adress = (char *)&s[i];
            return (adress);
        }
        i++;
    }
    return ((char *)'\0');
}