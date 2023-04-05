/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:31:33 by dlu               #+#    #+#             */
/*   Updated: 2023/03/26 18:01:59 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	solver(int board[][4], int key[], int row, int col)
{
	int	i;
	int	pos[2];

	pos[0] = row;
	pos[1] = col;
	i = 0;
	if (row == 4 && ft_print_result(board))
		return (1);
	else if (col == 4)
		return (solver(board, key, row + 1, 0));
	else
	{
		while (i++ < 4)
		{
			if (is_valid(board, key, pos, i))
			{
				board[col][row] = i;
				if (solver(board, key, row, col + 1))
					return (1);
				board[col][row] = 0;
			}
		}
	}
	return (0);
}
