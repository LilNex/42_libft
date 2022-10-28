#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list* l;

    l = lst;
    while(l != NULL)
    {
        f(l->content);
        l = l->next;
    }
}