/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters_conversion.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:20:17 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/26 17:59:35 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_string_to_array_conversion(char *str)
{
	int	i;
	int	str_position;
	int	*array_ret;

	array_ret = malloc(sizeof(int) * 16);
	i = 0;
	str_position = 0;
	while (i < 16)
	{
		array_ret[i] = str[str_position] - '0';
		str_position += 2;
		i++;
	}
	return (array_ret);
}
