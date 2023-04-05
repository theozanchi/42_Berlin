/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:40:25 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/16 18:04:34 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_concatenate(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9' ))
		write(1, &", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_concatenate(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
