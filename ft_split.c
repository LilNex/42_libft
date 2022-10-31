/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2022/10/22 10:20:36 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] == c)
			i++;
		i++;
	}
	return (count);
}

void	ft_free(void *p, size_t size)
{
	(void)size;
	if (p != NULL)
		free(p++);
}

static int	get_len(char *l, const char *s)
{
	int	len;

	if (l != NULL)
		len = (void *)l - (void *)s;
	else
		len = ft_strlen(s);
	return (len);
}

static char	**fill_array(const char *s, char c, char **arr, int countw)
{
	char	*l;
	int		x;
	char	*str;
	char 	*sc;

	x = 0;
	sc = ft_memset(ft_calloc(2, sizeof(char)), ((int)(c)), 1);
	while (x < countw)
	{
		while (!ft_strncmp(s, sc, 1))
			s++;
		l = ft_strchr(s, c);
		str = ft_substr(s, 0, get_len(l, s));
		if (!str)
		{
			while (x-- > 0)
				free(arr - x-1 );
			return (NULL);
		}
		*(arr++) = str;
		s += get_len(l, s) + 1;
		x++;
	}
	free(sc);
	*arr = NULL;
	return (arr - x);
}

char	**ft_split(char const *s, char c)
{
	int		count_words;
	int		i;
	char	*str;
	char	**arr;

	if (!s)
		return (NULL);
	str = ft_strtrim(s, " ");
	if (!str)
		return (NULL);
	i = 0;
	count_words = get_count_words((const char *)str, c);
	arr = malloc(sizeof(char *) * (count_words + 1));
	if (!arr)
		return (NULL);
	arr = fill_array(str, c, arr, count_words);
	// ft_free(str, ft_strlen(str));
	free(str);
	if (!arr)
		return (NULL);
	return (arr);
}
