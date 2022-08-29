/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:58:32 by mvalient          #+#    #+#             */
/*   Updated: 2022/08/29 15:45:57 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < maxlen)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (maxlen != 0)
	{
		ft_memcpy(dst, src, maxlen -1);
		dst[maxlen - 1] = '\0';
	}
	return (srclen);
}
