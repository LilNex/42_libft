#include<stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int  ft_isalnum(int c);
int ft_isascii(int c);
int  ft_isprint(int c);
int ft_strlen(char *c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, int n);
void *ft_memchr(const void *s, int c,size_t n);
// void *ft_memset(const void *b, int c,size_t len);
void *ft_memset (void *dest, int val, size_t len);
// void * ft_memcpy(void *restrict dest,void *restrict src,size_t n);
void * ft_memcpy (void *dest, const void *src, size_t len);
