#include"libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = count;
	}
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr,count * size);
	return ((void *)ptr);
}