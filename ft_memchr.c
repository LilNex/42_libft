#include "libft.h"

void	*ft_memchr(const void *s, int c,size_t n)
{
	size_t	i;
	char	*adress;

	i = 0;
	adress = (char *)s;
	if (!n)
		return (NULL);
	while (i < n)
	{
		if (*adress == (c % 256))
		{
			return (adress);
		}
		adress++;
		i++;
	}
	return ((char *) '\0');
}