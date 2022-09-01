/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:54:29 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/01 12:00:40 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	a[20] = "bs2asdasdF";
	char	b[20] = "asd";

	printf("strnstr: %s\n", strnstr(a, b, 20));
	printf("ft_strnstr: %s\n", ft_strnstr(a, b, 97));
}
