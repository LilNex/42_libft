
#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = (struct s_list *)*lst;
		*lst = new;
	}
}