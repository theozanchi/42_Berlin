/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:25:52 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 15:27:40 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	length;
	unsigned int	i;
	int				*array;

	if (min >= max)
		return (0);
	else
	{
		length = max - min;
		array = malloc((length * sizeof(int)));
		i = 0;
		while (i < length)
		{
			array[i] = min;
			min++;
			i++;
		}
		return (array);
	}
}
