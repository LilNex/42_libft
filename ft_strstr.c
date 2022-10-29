/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2022/10/22 10:20:36 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		len;
	char	*str;
	char	*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	len = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, len) == 0)
		{
			return (str);
		}
		str++;
	}
	return ((char *)('\0'));
}
