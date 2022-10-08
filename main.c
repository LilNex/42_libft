#include<stdio.h>
#include<string.h>
#include "libft.h"
int main ()
{
    char test[10] = "xxx";
    char test2[6] ="ABCDE";
    char c = ' ';
    printf("%s\n",test2);
    memset(test2,12,5);
    printf("st : %s\n",test2);
    ft_memset(test2,12,5);
    printf("ft : %s",test2);

}