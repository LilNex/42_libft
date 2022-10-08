int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((int)*s1 - (int)*s2);
		}	
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-(int)*s2);
	}
	return (0);
}
