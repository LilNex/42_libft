#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{
    return malloc(count * size);
}