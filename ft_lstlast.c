#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *n;
    n = lst;
    while (n)
    {
        if(n->next == NULL)
            return (t_list *)(n);
        n = (t_list *)n->next;
    }
    return (NULL);
}