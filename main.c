#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<strings.h>
#include "libft.h"
int main ()
{
    // void *s3;
    char *arr;
    // char src[] = "   sqd Qsds  sssdqs qsd q   qa ";
	// char dest[10];
    // char s[] = {0, 1, 2 ,3 ,4 ,5};
    // s3 = ft_memchr(s, 2 + 256, 3);
    arr = ft_strtrim("1123", "23");
    char * s = ft_strtrim("   xxxtripouille", " x");
    // printf("p : %p",s3);
    printf("arr : %s\n",arr);
    printf("s : %s",s);
    // s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
}