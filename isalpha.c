int ft_isupper(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	return (0);
}

int ft_islower(int c)
{
	if (97 <= c && c <= 122)
		return (1);
	return (0);
}

int ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
