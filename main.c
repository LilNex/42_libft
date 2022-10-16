#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<strings.h>
#include "libft.h"
int main ()
{
    char test[20] = "f a";
    char test2[100] ="cz   Foo Bar B  Ss     az   \0  ";
    char c = ' ';
    char *n;

    printf("st : %s\n", ft_split(test2,' '));
    // printf("strstr : %s\n", ft_strnstr(test2,test,1));
    // printf("ft : %d\n",ft_atoi(test));
    // printf("ft : %s\n",test2);

    
    // printf("ft : %s",ft_strnstr(test2,test,3));

}