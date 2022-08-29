/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:08:20 by mvalient          #+#    #+#             */
/*   Updated: 2022/08/29 13:14:40 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*ptr;

	ptr = s;
	i = -1;
	while (++i < n)
		ptr[i] = c;
	return (s);
}
