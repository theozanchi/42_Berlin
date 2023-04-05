/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:50:52 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/18 20:58:04 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	i;
	int	j;

	i = 42;
	j = 24;
	printf("The two digits orginally are %i and %i\n", i, j);
	ft_ultimate_div_mod(&i, &j);
	printf("After we apply ft_ultimate_div_mode they become %i and %i\n", i, j);
}
*/
