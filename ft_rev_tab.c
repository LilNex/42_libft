/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_teb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2022/10/22 10:20:36 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	tmp;

	i = size - 1;
	y = 0;
	while (i >= 0 && y < i)
	{
		tmp = tab[i];
		tab[i] = tab[y];
		tab[y] = tmp;
		y++;
		i--;
	}
}

void	ft_rev_char_tab(char *tab, int size)
{
	int		i;
	int		y;
	char	tmp;

	i = size - 1;
	y = 0;
	while (i >= 0 && y < i)
	{
		tmp = tab[i];
		tab[i] = tab[y];
		tab[y] = tmp;
		y++;
		i--;
	}
}
