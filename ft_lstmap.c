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