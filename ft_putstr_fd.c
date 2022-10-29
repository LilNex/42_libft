#include "libft.h"
#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	if(!s)
		return ;
	len = ft_strlen(s);
	if (fd >= 0)
		write(fd, s, (len * sizeof(char)));

}