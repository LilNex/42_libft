#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    int i;

    str = ft_calloc(len,sizeof(char));
    s += start;
    i= 0;
    while (*s && len-- > 0)
        str[i++] = *s++;
    
    str[i] = '\0';
    return str;
}