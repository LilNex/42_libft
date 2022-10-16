#include "libft.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;
	int	strlen;

	strlen  = ft_strlen((char *)s) ;
	str = ft_calloc(len+1,sizeof(char));
	if(*s == '\0')
		return NULL;
	if(!str)
		return NULL;
	
	s += start;
	i= 0;
	if( start >= (unsigned int)strlen)
		return ft_strdup("\0");
	while (*s && len-- > 0)
		str[i++] = *s++;
	
	str[i] = '\0';
	return str;
}