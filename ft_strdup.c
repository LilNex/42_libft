#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *new;
    int len;

    len = ft_strlen((char *)s1);
    new = ft_calloc((len + 1),sizeof(char) );
    if(!new)
        return NULL;
    if (len == 0)
    {
        *new = '\0';
        return new;
    }
    while (*s1)
        *new++ = *s1++;
    *new = '\0';    
    return (new - len);
}