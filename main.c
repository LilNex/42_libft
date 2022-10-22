#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<strings.h>
#include "libft.h"
int main ()
{

    printf("starst\n");

    // struct s_list *arr;
    // struct s_list **darr;
    // darr = malloc(sizeof(t_list)*4);
    // int i = 0;
    // while (i < 4)
    // {
    //     struct s_list *tmp = ft_calloc(1,sizeof(t_list));
    //     tmp->content = ft_itoa(i+10);
    //     *darr = tmp;
    //     darr++;
    //     i++;
    // }
    // printf("content : %d\n",(int)arr->content);
    // printf("content : %d\n",(int)(arr+1)->content);
    // printf("content : %d\n",(int)(arr+2)->content);
    // printf("content : %d\n",(int)(arr+3)->content);
    // arr = ft_lstnew((char *)56256154);
    char *s1;
    char *s2= "Wolrd";
    char dest[20];
    printf("before strcpy\n");
    s1 = ft_strlcpy(dest,s2,20);
    printf("result : %s\n",s1);
    printf("%d\n",(int)dest[5]);

}