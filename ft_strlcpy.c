#include "libft.h"


size_t
ft_strlcpy(char * dst, const char * src, size_t dsize)
{
	const char *firstSrc = src;
	size_t i = dsize;

	while (i != 0 &&  --i != 0) {
		if ( *src!= '\0')
			*dst++ = *src++;
	}

	if (i == 0) {
		if (dsize != 0)
			*dst = '\0';		
		while (*src++)
			;
	}

	return(src - firstSrc - 1);
}




























// size_t	ft_strlcpy(char *dest,const char *src,size_t dstsize)
// {
// 	size_t	i;
// 	size_t	count_src;

// 	count_src = ft_strlen(src);
// 	i = 0;
// 	if(src == NULL || *src == 0)
// 		return 0;
// 	// while (*src && i < dstsize-1)
// 	// 	dest[i++] = *src++;
// 	while (i < count_src && i < dstsize)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	while (i++ < dstsize)
// 		dest[i] = '\0';
	
	
	
//     return dstsize;
// }
