
int    ft_toupper(int c)
{
    if(c >= 97 && c<= 122)
    {
        return ((int)(c - 32));
    }
    else 
    {
        return ((int)c);
    }
}