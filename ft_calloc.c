#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{   
    if(count == 0 )
    {    
        count = 1;
    }

    return malloc(count * size);

}