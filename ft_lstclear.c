#include "libft.h"


// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*l;
// 	l = *lst;
// 	while (l != NULL)
// 	{
// 		del(*lst);
// 		l =(t_list *) (*lst)->next;

// 	}
	
// 	// *lst = NULL;
// }
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_elem;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		old_elem = *lst;
		ft_lstdelone(*lst,del);
		*lst =(t_list*) old_elem->next;
	}
	*lst = NULL;
}
