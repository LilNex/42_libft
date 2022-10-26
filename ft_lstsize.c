#include "libft.h"

int ft_lstsize(t_list *lst)
{
    size_t i;
    t_list *n;
    n = lst;
    i = 0;
    while (n)
    {
        n = (t_list *)n->next;
        i++;
    }
    return (i);
    
}