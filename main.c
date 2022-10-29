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
    printf("atoi st : %d\n", atoi("9223372036854775807"));
 
    printf("atoi ft : %d",ft_atoi("9223372036854775807"));
}