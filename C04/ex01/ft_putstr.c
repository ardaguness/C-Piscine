/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:00:26 by argunes           #+#    #+#             */
/*   Updated: 2024/08/24 19:19:25 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int	i;

	i	= 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	str[i] = '\n';
}

int	main(void)
{
	char dizi[] = "merhaba";
		
	ft_putstr(dizi);

	return (0);
}