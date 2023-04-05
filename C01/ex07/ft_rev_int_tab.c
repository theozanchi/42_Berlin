/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:48:51 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 10:48:56 by tzanchi          ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*
int	main(void)
{
	int	tab[4];
	int	i;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	i = 0;
	ft_rev_int_tab(tab, 4);
	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
