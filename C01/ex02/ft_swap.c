/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:32:28 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/18 20:41:42 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*
int	main(void)
{
	int	i;
	int	j;

	i = 42;
	j = 24;
	printf("Original couple was %i and %i\n", i, j);
	ft_swap(&i, &j);
	printf("New couple is %i and %i\n", i, j);
}
*/
