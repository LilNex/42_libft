#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<strings.h>
#include "libft.h"
int main ()
{
    char *s1;
    char *s2;
    char *s3;
    char s[30] = "split  ||this|for|me|||||!|";
    char **arr;

    s1 = ft_split(s,'|');

    printf("s1 : %s",*s1);

}