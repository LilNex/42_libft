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
    char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";




	// char s[] = {0, 1, 2 ,3 ,4 ,5};
    // ft_memchr(s, 2, 3);
    void *a ;
    void *g ;
    g = haystack + 1;
    a = ft_strnstr(haystack, "cd", 8);
    printf("adress : %p",a);
    printf(" char : %s\n",(char *)a);
    printf("------------------------------\n");
    printf("adress : %p",g);
    printf(" char : %s\n",(char *)g);

}