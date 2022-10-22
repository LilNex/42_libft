#include "libft.h"

char	*ft_strlcpy(char *dest,const char *src,size_t dstsize)
{
	size_t	count_src;
	size_t	i;

	count_src = ft_strlen((char *)src);
	i = 0; 
	while ( i < count_src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
    while (i<=dstsize){
        printf("orverriding %zu value : %d\n",i,(int)dest[i]);
        dest[i++] = '\0';
    }
        printf("--------------------------------\n");
    
	// dest[i] = '\0';buff2
	return (dest);
}