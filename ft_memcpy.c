// #include<stddef.h>
// #include<stdio.h>

// void * ft_memcpy(void *restrict dest,const void *restrict src,size_t n)
// {   
//     char *d;
//     const char *s;
//     unsigned int len;
//     int i = 0;

//     s = src;
//     d = dest;
//     len = n;

//     while (len-- > 0)
//         *d++ = *(s + i++);
    
//     return d-n;
// }

// void *
// ft_memcpy (void *dest, const void *src, size_t len)
// {
//   char *d = dest;
//   const char *s = src;
//   while (len--)
//     *d++ = *s++;
//   return dest;
// }

// #include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
// 	#ifndef NDEBUG
//      if (dst == NULL || src == NULL) return dst; // continue on
//   #endif
	if (dst == 0 && src == 0)
		return 0;
	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	while (n > 0)
	{
		*tmp2++ = *tmp1++;
		n--;	
	}
	return (dst);
}