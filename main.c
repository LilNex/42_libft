
#include "libft.h"

t_list **create_list(int n_elems, ...)
{
	t_list **header_ptr = malloc(sizeof(t_list *));
	va_list argp;

	*header_ptr = NULL;
	for (int i = 0; i < n_elems; i++){
        char *t =ft_itoa(i);
        char tab[]  = "no.";
        char *s = ft_strdup(ft_strcat(tab,t));
    	ft_lstadd_back(header_ptr, ft_lstnew(s));
    }

	return header_ptr;
}
void del(void *c)
{
    printf("content : %s\n",(char*)c);
}
int main()
{
    unsigned char x = 'a';
    t_list **header_ptr;
    // char *s;
    t_list *tmp;
    // s = ft_strchr(0x10c8b2820: "teste", 1024: '\0')
    int count = 3;
    header_ptr = create_list(count);
    printf("pointer : %p\n",header_ptr);
    tmp = *header_ptr;
    for (size_t i = 0; i < count; i++)
    {
        printf("content of first : %s\n",tmp->content);
        tmp = tmp->next;
    }
    ft_lstclear(header_ptr,del);
    // printf("p : %p | s : %s\n",s);

}