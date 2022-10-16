#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{
    if (count == 0 || size == 0)
        size = count = 1;
    // if (count > 0)
    void *ptr;
    ptr = malloc(count * size);
    ft_bzero(ptr,count * size);
    return (void *)ptr;
    // else 
    //     return malloc(size * 1);
}