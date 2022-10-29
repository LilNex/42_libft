#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen((char *) s);
	if (start >= (unsigned int) strlen)
		return (ft_strdup("\0"));
	if ((size_t)strlen > len)
		strlen = len;
	str = ft_calloc(strlen + 1, sizeof(char));
	if (!str)
		return (NULL);
	s += start;
	i = 0;
	while (*s && len-- > 0)
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}
