/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:36:10 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/26 18:04:14 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_result(int arr[][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(arr[j][i] + '0');
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
	return (1);
}
