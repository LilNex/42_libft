/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:19:59 by ichaiq            #+#    #+#             */
/*   Updated: 2022/10/22 10:20:36 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*arr;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	arr = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&arr, del);
			return (NULL);
		}
		ft_lstadd_back(&arr, node);
		lst = lst->next;
	}
	return (arr);
}

void *f(void *c)
{
	char *s = (char *)c;
	int i = 0;
	while (s[i])
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}

int main()
{
	t_list *khalid = ft_lstnew(ft_strdup("khalid"));
	t_list *moad = ft_lstnew(ft_strdup("moad"));
	t_list *amine = ft_lstnew(ft_strdup("amine"));
	ft_lstadd_back(&khalid, moad);
	ft_lstadd_back(&khalid, amine);

	t_list *list = ft_lstmap(khalid, f, free);
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}
