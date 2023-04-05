/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:27:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 10:49:45 by tzanchi          ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 1;
	while (j < size)
	{
		i = 0;
		while (i < size - j)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}

/*
int	main(void)
{
	int	tab[4];
	int	i;

	tab[0] = 3;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 1;
	i = 0;
	ft_sort_int_tab(tab, 4);
	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
