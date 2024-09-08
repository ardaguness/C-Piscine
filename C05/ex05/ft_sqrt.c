/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:40:21 by argunes           #+#    #+#             */
/*   Updated: 2024/08/26 14:14:28 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1; // 7x7
	while (i * i <= nb && i <= 46340) // 2,147,483,647 değeri aşmamak için
	{
		if (i * i == nb)
			return (i); // eşitse return et
		else
			i++;
	}
	return (0);
}
