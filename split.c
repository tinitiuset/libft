/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:24:56 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/06 15:29:58 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_into(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_alloc_split_mem(char const *s, char c, size_t i)
{
	const char	*s2;
	char	**str;
	size_t	k;
	size_t	j;

	str = malloc(i);
	//printf("divided in %zu\n", i);
	k = -1;
	while (++k <= i)
	{
		j = 0;
		//printf("%s\n", s);
		s2 = s;
		while(*s && *s != c)
		{
			j++;
			s++;
		}
		s++;
		str[k] = malloc(j + 1);
		//printf("string %zu has %zu chars\n", k, j);
		while (j--)
			*str[k]++ = *s2++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char 	**str;
	size_t	i;
	
	i = ft_into(s, c);
	str = ft_alloc_split_mem(s, c, i);
	return (str);
}
