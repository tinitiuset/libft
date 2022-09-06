/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:53:00 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/06 17:17:30 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	int	digits;
	char	*nb;
	
	if (n >= 0)
	{
		digits = n;
		i = 1;
		while (n > 9)
		{
			n = n / 10;
			i++;
		}
		printf("%lu", i);
		printf("%d", n);
		nb = malloc(i);

	}
	else
	{
		i = 1;
	}
}
