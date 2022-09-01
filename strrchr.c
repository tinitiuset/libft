/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:31:00 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/01 15:50:41 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	c = (unsigned char) c;
	if (c == '\0')
		return (strchr(s, '\0'));
	found = NULL;
	while (strchr(s, c) != NULL )
	{
		found = strchr(s, c);
		s = found + 1;
	}
	return ((char *) found);
}
