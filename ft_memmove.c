#include "libft.h"
#include <stddef.h>
void *ft_memmove(void *dst, const void *src, size_t len){
    int i;
    i = 0;
    while (len-->0)
    {
        *(char *)(dst + i) = *(char *)(src + i);
        i++;    
    }
    
    return dst;

}