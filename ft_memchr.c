#include "libft.h"
#include<stddef.h>
#include<stdio.h>

void *ft_memchr(const void *s, int c,size_t n)
{
    size_t  i;
    char    *adress;
    i = 0;
    adress = (char *)s;
    if(!n)
        return NULL;
    // if(s == NULL )
    // {
    //     *(char*)s = (char)c;
    //     return ((char*) s);
    // }
    // printf("\n");
    // printf("n : %zu\n",n);
    // printf("i : %d\n",i);
    while (i < n && *adress != '\0')
    {
        // printf("i : %d\n",i);
        if (*adress == (c % 256)){
            return (adress);
        }
         adress++;
        i++;
        
    }
    if (*(adress)==c)
        return ((char *)adress);    
    return ((char *)'\0');
}