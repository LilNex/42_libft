#include "libft.h"
#include<stdlib.h>
#include<stdio.h>
int get_count_words(char *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if(s[i])
        count++;
    while (s[i])
    {
        if(s[i] == c)
        {
            count++;
            i++;
        }
        while (s[i] == c)
                i++;
        i++;
    }
    return (count);
}

char **fillArray(char *s,char c,char **arr){
    int i = 0;
    int y = 0;
    int count = 0;
        printf("test");

    while (s[i])
    {
        printf("%c",s[i]);

        y = 0;
            while (s[++i] != c)
                *(*(arr + count)+ (y++)) = s[i] ;
            
            count++;
            i++;
        i++;
    }
    return arr;
}

char *ft_split(char const *s, char c)
{
    int count_words;
    int i;
    char *_s;
    char **arr;

    _s = ft_strtrim(s," ");
    printf("count : %s\n", _s);
    i = 0;
    count_words = get_count_words(_s,c);
    arr = malloc(8 * count_words);
    printf("count : %s\n", _s);
    fillArray(_s,c,arr);
    printf("count : %s\n", *arr);
    
    return (char *)_s;
}