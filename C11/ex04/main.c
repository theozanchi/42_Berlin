/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:28:09 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 18:54:40 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_smaller(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[3];

	tab[0] = 3;
	tab[1] = 8;
	tab[2] = 7;
	printf("%d", ft_is_sort(tab, 3, &ft_is_smaller));
}
