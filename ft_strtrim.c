#include"libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	char    *str;
	char    *c;
	int     i;

	str = ft_calloc(ft_strlen((char *)s1) + 1,sizeof(char));
	i = 0;
	if (s1 == '\0' || *s1 == '\0')
		return (char *)s1;
	c = ft_calloc(2,sizeof(char));
	if (!str || !c)
		return NULL;
	c[0] = *s1;
	c[1] = '\0';  
	while (ft_strnstr(set,c,ft_strlen((char *)set)) != '\0')
		c[0] = *++s1;
	while (*s1 != '\0' && !(ft_strnstr(set,c,ft_strlen((char *)set)) != '\0'))
		str[i++] = *(s1++);
	c[0] = str[--i];
	while (ft_strnstr(set,c,ft_strlen((char *)set)) != '\0')
		c[0] = str[--i];
	str[i+1] = '\0';
	char *p;
	p = ft_strdup((const char *)str);
	if(!p)
		return NULL;
	return p ;

}