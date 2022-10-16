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
    unsigned long i;

    i = (unsigned long)len -1;
    // if (dst == '\0' || src == '\0' )
	// 	return (void *)dst;
    // while (i <= (int)len)
    // {
    //     *(char *)( &dst[i]) = *(char *)(&src[i]);
    //     i++;
    // }
    if (!dst && !src)
		return (NULL);
    // if (dst >= src )
    //     dst = ft_memcpy(dst,src,len);    
    // else
    // {
    //     // dst = ft_revmemcpy(dst,src,len);
    //     while (i > 0)
    //     {
    //         // *(char *)( &dst[i]) = *(char * )(&src[i]);
    //         *(unsigned long *)(dst + len) = *(unsigned long *)(src + (len - i));
    //         i++;
    //     }
    // }
    if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
    


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
// 		ft_memcpy(d,s,len);
// 	else
// 		while (i < len)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	return (dst);
// }