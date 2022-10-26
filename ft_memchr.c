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
    while (*(adress) != '\0' && i <=n)
    {
        // printf("i : %d\n",i);
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