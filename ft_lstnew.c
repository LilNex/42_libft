#include"libft.h"

t_list *ft_lstnew(void *content)
{
    // struct s_list array;

    struct s_list *lst;

    lst = (t_list *)ft_calloc(1,sizeof(t_list));
    if (!lst)
        return NULL;
    lst->content = content;

    return lst;
    
}