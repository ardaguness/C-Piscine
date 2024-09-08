/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argunes <argunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:00:13 by argunes           #+#    #+#             */
/*   Updated: 2024/08/31 17:16:23 by argunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

char *ft_strdup(char *src)
{
    int i = 0;
    char *copy;

    copy = (char *)malloc(ft_strlen(src) + 1);
    if (copy == NULL)
        return (NULL);
    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *arr;
    int i;

    arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if (arr == NULL)
        return (NULL);

    i = 0;
    while (i < ac)
    {
        arr[i].size = ft_strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = ft_strdup(av[i]);
        if (arr[i].copy == NULL)
        {
            free(arr);
            return (NULL);
        }
        i++;
    }
    arr[i].str = 0;
    return (arr);
}
