#include "libft.h"
#include <stddef.h>
#include <stdio.h>
// void *ft_memmove(void *dst, const void *src, size_t len){
//     int i;
//     i = 0;
//     int l;
//     l = ft_strlen((char *)src);
//     if ((char *)dst == '\0' || (char *)src == '\0' )
// 		return 0;
//     while (len-->0)
//     {
//         *(char *)(dst + i) = *(char *)(src + i);
//         i++;    
//     }
    
//     return dst;

// }

void *ft_memmove(void *dst,const void *src, size_t len)
{
    int i;

    i = (int)len;
    // if (dst == '\0' || src == '\0' )
	// 	return (void *)dst;
    // while (i <= (int)len)
    // {
    //     *(char *)( &dst[i]) = *(char *)(&src[i]);
    //     i++;
    // }
    if (dst > src)
        dst = ft_memcpy(dst,src,len);
    // else
    // {
    //     while (i >= 0)
    //     {
    //         *(char *)( &dst[i]) = *(char * )(&src[i]);
    //         i--;
    //     }
    // }
    


    return dst;
}
// #include "libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	char	*s;
// 	char	*d;
// 	size_t	i;

// 	s = (char *)src;
// 	d = (char *)dst;
//     if (dst == '\0' || src == '\0' )
// 		return (void *)dst;
// 	i = 0;
// 	if (d > s)
// 		while (len-- > 0)
// 			d[len] = s[len];
// 	else
// 		while (i < len)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	return (dst);
// }