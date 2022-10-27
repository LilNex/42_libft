#include "libft.h"

void *ft_exitfree(void *p, size_t size)
{
    while(size-- >= 0)
        free(p++);
    return NULL;
}