/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:54:29 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/01 09:57:51 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	a[20] = "bs2asd";
	char	b[20] = "bsdasd";

	printf("strrchr: %s\n", strrchr(a, 97));
	printf("ft_strrchr: %s\n", ft_strrchr(a, 97));
}
