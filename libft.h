#include<stddef.h>
#include<stdio.h>
typedef struct s_list
{
    void *content;
    struct t_list *next;
}   t_list;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int  ft_isalnum(int c);
int ft_isascii(int c);
int  ft_isprint(int c);
size_t ft_strlen(const char *c);
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
int     ft_atoi(const char *str);
char    *ft_strdup(const char *s1);
void    *ft_calloc(size_t count, size_t size);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_split(char const *s, char c);
char    *ft_itoa(int n);
void	ft_rev_char_tab(char *tab, int size);
// char	*ft_strlcpy(char *dest,const char *src,size_t dstsize);
size_t	ft_strlcpy(char *dest,const char *src,size_t dstsize);
// char     ft_itoa(int n);
char    *ft_isspace(char c);
char	*ft_strcpy(char *dest, char *src);
void	ft_rev_int_tab(int *tab, int size);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);

