/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:47:31 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 17:56:52 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*output;
	int	i;

	output = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
