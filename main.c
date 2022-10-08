#include<stdio.h>
#include<string.h>
#include<strings.h>
#include "libft.h"
int main ()
{
    char test[3] = "o";
    char test2[20] ="Foo Bar Baz";
    char c = ' ';
    ft_memmove(test,test2,5);
    printf("st : %s\n",test);
    printf("ft : %s\n",test2);

    
    // printf("ft : %s",ft_strnstr(test2,test,3));

}