#include "libft.h"


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	while (*lst != NULL)
	{
		l = ( t_list *)(((t_list *)lst)->next);
		ft_lstdelone(*lst, del);
		*lst = l;
	}
	// *lst = NULL;
}

