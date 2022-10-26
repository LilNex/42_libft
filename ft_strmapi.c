#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *newStr;
	size_t i;

	i = 0;
	newStr = ft_strdup(s);
	if(!newStr)
		return (NULL);
	while (newStr[i])
	{
		newStr[i] = (*f)(i,newStr[i]);
		i++;
	}
	return newStr;

}