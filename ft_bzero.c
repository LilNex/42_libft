#include "libft.h"
#include <stddef.h>

void ft_bzero(void *s,size_t n)
{
    while (n-- > 0)
        *(char *)(s++) = 0;
    
}