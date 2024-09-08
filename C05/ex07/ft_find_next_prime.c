/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:59:58 by argunes           #+#    #+#             */
/*   Updated: 2024/08/26 14:20:01 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	asal_sayi_mi;

	asal_sayi_mi = 0;
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (asal_sayi_mi != 1)
	{
		if (ft_is_prime(nb) == 1)
		{
			asal_sayi_mi = 1;
		}
		nb++;
	}
	return (nb - 1);
}
