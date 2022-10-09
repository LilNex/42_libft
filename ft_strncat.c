#include<unistd.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	unsigned int	i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while (*s2 != '\0' && nb < n)
	{
		*s1 = *s2;
		s1++;
		i++;
		s2++;
		nb++;
	}
	*s1 = '\0';
	return (s1 - i);
}
