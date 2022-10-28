#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n;
	char	*str;
	char	*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	n = ft_strlen(to_find);
	// if(len == 1)
	// 	len++;
	if (*to_find == '\0' || to_find == 0)
		return (str);
	if (!len)
		return ((char *) len);
	while (*str != '\0' && len  > 0)
	{
		if (ft_strncmp(str, to_find, n) == 0 && len >=n)
		{
			return (str);
		}
		str++;
		len--;
	}
	return (NULL);
}