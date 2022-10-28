#include "libft.h"

void	fill_nbr(char *str, int *n, int *signe, int *l)
{
	int	nbr;
	int	len;

	nbr = *n;
	len = *l;
	if (nbr < 0)
	{
		if(nbr == -2147483648)
		{
			str[len] = '8';
			nbr = nbr / 10;
		}
		*signe = -1;
		nbr = nbr * -1;
		len++;
	}
	while (nbr % 10 != nbr)
	{
		str[len++] = (char)((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	str[len++] = nbr + 48;
	*n = nbr;
	*l = len;
}

char	*ft_itoa(int n)
{
	int		nbr;
	int		len;
	char	*str;
	char	*a;
	int		signe;
	str = ft_calloc(20, sizeof(char));
	if (!str)
		return NULL;
	nbr = n;
	len = 0;
	signe = 1;
	fill_nbr(str, &nbr, &signe, &len);
	if (signe == -1)
		str[len++] = '-';
	str[len] = '\0';
	ft_rev_char_tab(str, len);
	a = ft_strdup(str);
	free(str);
	return (a);
}
