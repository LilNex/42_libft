#include"libft.h"
#include<stdlib.h>
#include<stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;

    str = ft_calloc(ft_strlen((char *)s1) + 1,sizeof(char));
    i = 0;
    printf(" set :%s\n",set);
    printf(" s1 :%s\n",s1);
    printf(" strstr :%s\n",ft_strnstr(set,s1,1));
    while (ft_strnstr(set,*s1,1) != '\0')
            s1++;

    while (*s1 != '\0')
        str[i++] = *s1++;
    
    
    return str ;

}