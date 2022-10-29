#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	i = 0;
	if(!s || !f)
		return (NULL);
	new_str = ft_strdup(s);
	if (!new_str)
		return (NULL);
	while (new_str[i])
	{
		new_str[i] = (*f)(i, new_str[i]);
		i++;
	}
	return (new_str);

}