void *ft_memmove(void *dest, const void *src, size_t n)
{
	char		temp[n];
	char		*d;
	const char	*s;
	int		i;

	d = dest;
	s = src;
	i = -1;
	while (++i < n)
		temp[i] = *s++;
	i = -1;
	while (temp[++i])
		*d++ = temp[i];
	return (dest);
}
