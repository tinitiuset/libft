/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:08:06 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/01 12:00:04 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*occurrence;

	j = 0;
	while (len--)
	{
		i = 0;
		if (haystack[j] == needle[i])
		{
			occurrence = (char *)&haystack[j];
			while (haystack[j + i] == needle[i])
				i++;
			if (!needle[i])
				return (occurrence);
		}
		j++;
	}
	return (NULL);
}
