#include "libft.h"
#include<stddef.h>

void *ft_memchr(const void *s, int c,size_t n)
{
    unsigned int i;
    char *adress;
    i = 0;
    adress = (char *)s;

    while (*(adress) != '\0' && i < n)
    {
        if (*adress == c){
            return (adress);
        }
        adress++;
        i++;
    }
    return ((char *)'\0');
}