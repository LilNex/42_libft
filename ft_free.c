#include "libft.h"

void ft_free(void *p, size_t size)
{
    while(size-- > 0)
        free(p++);
}