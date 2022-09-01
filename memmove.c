/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:08:14 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/01 14:32:32 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		temp[n];
	char		*d;
	const char	*s;
	int			i;

	d = dest;
	s = src;
	i = -1;
	while (++i < (int)n)
		temp[i] = *s++;
	i = -1;
	while (temp[++i])
		*d++ = temp[i];
	return (dest);
}
