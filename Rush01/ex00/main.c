/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:03:31 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/26 17:59:53 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	init_board(int board[][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			board[i][j] = 0;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char *argv[])
{
	int	*input;
	int	board[4][4];

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	else if (ft_is_string_valid(argv[1]) == 0)
	{
		print_error();
		return (1);
	}
	else
	{
		init_board(board);
		input = ft_string_to_array_conversion(argv[1]);
		if (!solver(board, input, 0, 0))
		{
			print_error();
			return (1);
		}
		return (0);
	}
}
