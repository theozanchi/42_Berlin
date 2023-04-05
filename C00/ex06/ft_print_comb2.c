/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:38:02 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/16 17:45:18 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_split_numbers_into_table_of_digits(int a, int b, int digits_table[])
{
	digits_table[0] = a / 10 + '0';
	digits_table[1] = a % 10 + '0';
	digits_table[2] = b / 10 + '0';
	digits_table[3] = b % 10 + '0';
}

void	ft_concatenate(int a, int b)
{
	int	table[3];

	ft_split_numbers_into_table_of_digits(a, b, table);
	write(1, &table[0], 1);
	write(1, &table[1], 1);
	write(1, &" ", 1);
	write(1, &table[2], 1);
	write(1, &table[3], 1);
	if (a != 98)
		write(1, &", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_concatenate(i, j);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
