/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:08:35 by argunes           #+#    #+#             */
/*   Updated: 2024/08/31 16:26:34 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		str_index;
	int		char_index;
	int		result_index;

	result = malloc(sizeof(strs));
	str_index = 0;
	result_index = 0;
	while (str_index < size)
	{
		char_index = 0;
		while (strs[str_index][char_index] != '\0')
		{
			result[result_index++] = strs[str_index][char_index++];
		}
		char_index = 0;
		while (sep[char_index] != '\0' && str_index != size - 1)
		{
			result[result_index++] = sep[char_index++];
		}
		str_index++;
	}
	result[result_index] = '\0';
	return (result);
}
