void *ft_memset(void *s, int c, size_t n)
{
	int	i;
	char *ptr = s;

	i = -1;
	while (++i < n)
		ptr[i] = c;
	return (s);
}
