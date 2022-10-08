int    ft_tolower(int c)
{
    if(c >= 65 && c<= 90)
    {
        return ((int)(c + 32));
    }
    else 
    {
        return ((int)c);
    }
}