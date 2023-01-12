/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2023/01/12 21:20:29 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int ft_issigne(int c)
{
	if(c == 43 || c == 45 || ft_isdigit(c))
		return (1);
	return (0);
}

int ft_isnumber(char *c)
{
	int signe;
	
	if((signe = ft_issigne((int)*c)))
	// puts("return 0");
		c++;
	while (*c)
	{
		if(!ft_isdigit(*c))
			return 0;
		c++;
	}
	return signe;
}