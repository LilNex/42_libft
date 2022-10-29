#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	str = ft_calloc(size, sizeof(char));
	if (str == '\0')
		return (str);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
