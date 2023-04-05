/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:52:12 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 18:22:40 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_times_two(int i)
{
	return (2 * i);
}

int	main(void)
{
	int	tab[10];
	int	*output;
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] = i;
		i++;
	}
	output = ft_map(tab, 10, &ft_times_two);
	i = 0;
	while (i < 10)
	{
		printf("%d	%d\n", tab[i], output[i]);
		i++;
	}
}
