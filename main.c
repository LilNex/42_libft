#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<strings.h>
#include "libft.h"
void freeTab(char * * tab)
{
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}
int main ()
{
    // void *s3;
    // char *arr;
    // char **tab;
    // char *splitme;
    // char src[] = "   sqd Qsds  sssdqs qsd q   qa ";
	// char dest[10];
    // char s[] = {0, 1, 2 ,3 ,4 ,5};
    // s3 = ft_memchr(s, 2 + 256, 3);
    // tab = ft_split("  tripouille  42  ", ' ');
    // splitme = strdup("--1-2--3---4----5-----42");
	// tab = ft_split(splitme, '-');
    char src[] = "coucou";
	char dest[10]; 
    ft_memset(dest, 'A', 10);
    size_t x = ft_strlcpy(dest, src, -1);
    size_t y = ft_strlen(src);
    char c = dest[strlen(src) + 1];
    printf("src : %s\n",src);
    printf("dest : %s",dest);
    // printf("p : %p",s3);
    // printf("arr : %s\n",arr);
    // for (int i = 0; i <= 6;i++)
    //     printf(" %p | %s\n",&tab[i],tab[i]);
    // s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
}