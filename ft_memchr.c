#include "libft.h"
#include<stddef.h>
#include<stdio.h>

void *ft_memchr(const void *s, int c,size_t n)
{
    unsigned int i;
    char *adress;
    i = 0;
    adress = (char *)s;
    if(s == NULL )
    {
        *(char*)s = (char)c;
        return ((char*) s);
    }
    while (*(adress) != '\0' && i < n)
    {
        if (*adress == c){
            return (adress);
        }
        adress++;
        i++;
    }
    if (*(adress)==c)
        return ((char *)adress);    
    return ((char *)'\0');
}