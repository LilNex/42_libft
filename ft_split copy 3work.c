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
        if(s[i] == c && s[i+1] != '\0')
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

char **fillArray(const char *s, char c, char **arr,int countW)
{
    char    *l;
    int     len;
    int     x;
    char    *str;
    x = 0;
    while (x < countW){
        while(!ft_strncmp(s,&c,1))
            s++;
        l = ft_strchr(s,c);
        // if (!l) return NULL;
        // if(x == countW - 1)
        //     len = ft_strlen(s);
        // else
            len = (void *)l - (void *)s;
        str = ft_substr(s,0,len);
        if (!str)
        {
            while (x > 0)
                free(arr - (x--));
        }
        *arr = str;
        arr++;
        s += len+1;
        x++;
        
    }
    *arr = NULL;
    return arr - x;

}

char **ft_split(char const *s, char c)
{
    int count_words;
    int i;
    char *_s;
    char **arr;
    if (!s)
        return NULL;

    _s = ft_strtrim(s," ");
    i = 0;
    count_words = get_count_words(_s,c);
    arr = malloc(8 * count_words);
    if (!arr)
        return NULL;

    arr = fillArray(_s,c,arr,count_words);
    if (!arr)
        return NULL;
    return arr;
} 