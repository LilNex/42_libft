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

void fillArray(char *s,char c,void *a){
    printf("test");
    int i = 0;
    int y = 0;
    int count = 0;
    // (void)c;
    // (void)s;
    // (void)arr;
    char **arr = (char **)a;
    while (s[i])
    {
        printf("%c",s[i]);
        // if(s[i] == c)
        // {
            
        // }
        // while (s[i] == c)
        //         i++;
        y = 0;
        while (s[++i] != c)
            *(*(arr + count)+ (y++)) = s[i] ;
        
        count++;
        i++;
        i++;
    }
}

char *ft_split(char const *s, char c)
{
    int count_words;
    int i;
    char *_s;
    void **arr;

    _s = ft_strtrim(s," ");
    // printf("count : %s\n", _s);
    i = 0;
    count_words = get_count_words(_s,c);
    arr = malloc(8 * count_words);
    printf("count : %d\n", count_words);
    printf("s : %s\n", s);
    fillArray(_s,c,arr);
    // printf("count : %s\n", *arr);
    
    return (char *)_s;
} 