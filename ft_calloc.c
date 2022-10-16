#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{
	void    *ptr;
	if (count == 0 || size == 0)
		size = count = 1;
	// if (count > 0)
	ptr = malloc(count * size);
	if (!ptr)
		 return(NULL);
	ft_bzero(ptr,count * size);
	return (void *)ptr;
	// else 
	//     return malloc(size * 1);
}