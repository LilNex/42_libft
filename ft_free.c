#include "libft.h"

void ft_free(void *p, size_t size)
{
    (void)size;
    // char *s = (char *)p;
    if (p != NULL)
        // while(size-- > 0)
            free(p++);
}