// #include "libft.h"
// #define DllExport   _ft_isalpha(dllexport)

int  ft_isalpha(char c){
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}