#include"libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    (void)new;
    while (lst++ != NULL)
    {
        if (lst == NULL)
        {
            lst--;
            // (*lst)->next = new;
            return;
        }
        
    }
    
}