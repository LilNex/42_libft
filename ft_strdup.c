#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *new;
    int len;

    len = ft_strlen((char *)s1);
    new = malloc(sizeof(char) * (len + 1));

    while (*s1)
        *new++ = *s1++;
    *new = '\0';    
    return (new - len);
}