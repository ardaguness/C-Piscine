/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:47:54 by argunes           #+#    #+#             */
/*   Updated: 2024/08/25 18:03:28 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sayi;
	int	faktoriyel_toplami;

	sayi = 1;
	faktoriyel_toplami = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (sayi <= nb)
	{
		faktoriyel_toplami *= sayi;
		sayi++;
	}
	return (faktoriyel_toplami);
}
