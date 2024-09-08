/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:14:27 by argunes           #+#    #+#             */
/*   Updated: 2024/08/24 19:23:40 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int		i;
	int		mult;
	int		nb;

	mult = 1;
	nb = 0;
	i = 0;
	// boşluk, newline, r => satır başı, t => tab karakteri, v=> dikey tab
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+') // son - veya son + işaretini dikkate alma
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') // 007 gibi sayıları 7 yapmak içinw
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}

int		main(void)
{
	char	*str, *str2;

	str = "      ----+---+++2300fesfss65+2";
	str2 = "2300";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
}


