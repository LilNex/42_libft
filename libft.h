#include<stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int  ft_isalnum(int c);
int ft_isascii(int c);
int  ft_isprint(int c);
size_t ft_strlen(char *c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c,size_t n);
// void *ft_memset(const void *b, int c,size_t len);
void *ft_memset (void *dest, int val, size_t len);
// void * ft_memcpy(void *restrict dest,void *restrict src,size_t n);
void * ft_memcpy (void *dest, const void *src, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void ft_bzero(void *s,size_t n);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_revmemcpy(void *dst, const void *src, size_t n);
char	*ft_strcat(char *  s1, const char *  s2);
int	ft_atoi(const char *str);
char *ft_strdup(const char *s1);
void *ft_calloc(size_t count, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_split(char const *s, char c);

char    *ft_isspace(char c);