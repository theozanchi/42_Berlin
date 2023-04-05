/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:33:59 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/27 20:33:59 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	length;
	unsigned int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		length = max - min;
		i = 0;
		*range = malloc(length * sizeof(int));
		while (i < length)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (length);
	}
}
