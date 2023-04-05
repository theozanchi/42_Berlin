/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:51:34 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:51:37 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	int	count;

	count = ft_ten_queens_puzzle();
	printf("\n%d solutions found to the problem", count);
}
