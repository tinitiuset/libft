/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:54:29 by mvalient          #+#    #+#             */
/*   Updated: 2022/08/31 17:01:05 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	a[20] = "bs2asd";
	char	b[20] = "bsdasd";

	printf("memcmp: %d\n", memcmp(a, b, 20));
	printf("ft_memcmp: %d\n", ft_memcmp(a, b, 20));
}
