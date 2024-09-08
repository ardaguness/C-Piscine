/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:53:45 by argunes           #+#    #+#             */
/*   Updated: 2024/08/20 19:32:35 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		retour;
	char	c;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 48 || c > 57)
		{
			retour = 0;
		}
		i++;
	}
	return (retour);
}
