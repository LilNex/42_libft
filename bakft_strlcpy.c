#include "libft.h"

char	*ft_strlcpy(char *dest,const char *src,size_t destsize)
{
	// size_t	count_src;
	// size_t	i;

	// count_src = ft_strdestsize((char *)src);
	// i = 0; 
	// while ( i < count_src && src[i])
	// {
	// 	dest[i] = src[i];
	// 	i++;
	// }
	// ft_memcpy(dest,src,count_src);

    // while (i<=destsize){
    //     // printf("orverriding %zu value : %d\n",i,(int)dest[i]);
    //     dest[i++] = '\0';
    // }
        // printf("--------------------------------\n");
    
	// dest[i] = '\0';buff2
	unsigned long i;

    i = (unsigned long)destsize -1;
    if (!dest && !src)
		return (NULL);
    if (dest > src)
	{
		while (destsize > 0)
		{
			((char *)dest)[destsize - 1] = ((char *)src)[destsize - 1];
			destsize--;
		}
	}
	else
	{
		i = 0;
		while (i < destsize)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
    return dest;
}