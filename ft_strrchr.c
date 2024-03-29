/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2023/06/03 05:57:25 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}

char	*ft_strnchr(const char *s, int c, int n)
{
	int	i;
	int len;

	len = ft_strlen((char *)s);
	i = 0;
	while (n > i && i < len)
	{
		if (s[i] == (char)c)
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}
