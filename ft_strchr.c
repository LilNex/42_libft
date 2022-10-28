#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*adress;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (c % 256)){
			adress = (char *)&s[i];
			return (adress);
		}
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return ((char *) '\0');
}