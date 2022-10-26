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

	if (!del)
		return ;
	while (*lst)
	{
		old_elem = *lst;
		del((*lst)->content);
		free((void *)((*lst)->content));
		*lst =(t_list*) old_elem->next;
		free(old_elem);
	}
	*lst = NULL;
}
