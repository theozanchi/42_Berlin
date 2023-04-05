/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:17:55 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/17 12:53:36 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_split_into_digits_table(int nb, int table[])
{
	int	i;

	i = 9;
	while (i >= 0)
	{
		table[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
}

void	ft_putnegnbr(int nb, int table[])
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		write(1, "-", 1);
		nb = nb * -1;
		while (i >= 9)
		{
			if (table[i] != '0')
			{
				write(1, &table[i], 1);
				i++;
			}
			else
				i++;
		}
	}
}

void	ft_putposnbr(int nb, int table[])
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		if (table[i] != '0')
		{
			write(1, &table[i], 1);
			i++;
		}
		else
			i++;
	}
}

void	ft_putnbr(int nb)
{
	int	table[10];

	ft_split_into_digits_table(nb, table);
	if (nb < 0)
		ft_putnegnbr(nb, table);
	else
		ft_putposnbr(nb, table);
}

/*
int	main(void)
{
	ft_putnbr(42);
	write(1, &"\n", 1);
	ft_putnbr(-2147483648);
	write(1, &"\n", 1);
	ft_putnbr(2147483647);
}
*/
