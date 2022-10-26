
#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    last = ft_lstlast(*lst);
    if(last)
        last->next = (struct t_list *)new;
    else
        *lst = new;
	
}