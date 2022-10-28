#include "libft.h"

void ft_free(void *p, size_t size)
{
    (void)size;
    if (p != NULL)
            free(p++);
}