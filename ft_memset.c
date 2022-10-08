#include "libft.h"
#include<stddef.h>

void *ft_memset(void *b, int c,size_t len)
{
    unsigned int i;
    char *adress;
    i = 0;
    adress = (char *)b;

    while (i < len)
    {
        *(adress + i) = c;
        // adress++;
        i++;
    }
    return (adress);
}
// void * ft_memset (void *dest, int val, size_t len)
// {
//   unsigned char *ptr = dest;
//   while (len-- > 0)
//     *ptr++ = val;
//   return dest;
// }