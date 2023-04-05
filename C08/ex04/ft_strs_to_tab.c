/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:01:38 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/01 13:00:22 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	char	*dup_ptr;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	dup_ptr = dup;
	while (*str)
		*dup_ptr++ = *str++;
	*dup_ptr = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result_array;
	int			i;

	result_array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!result_array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result_array[i].size = ft_strlen(av[i]);
		result_array[i].str = av[i];
		result_array[i].copy = ft_strdup(av[i]);
		i++;
	}
	result_array[i].str = 0;
	return (result_array);
}
