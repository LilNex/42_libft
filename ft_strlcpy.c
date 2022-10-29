/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2022/10/22 10:20:36 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	const char	*first_src;
	size_t		i;

	if (dsize < 0 || dsize + 1 == 0)
		dsize = ft_strlen(src) + 1;
	i = dsize;
	first_src = src;
	while (i != 0 && --i != 0)
	{
		if (*src != '\0')
			*dst++ = *src++;
	}
	if (i == 0)
	{
		if (dsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - first_src - 1);
}
