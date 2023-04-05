/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:51:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:51:43 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(int chessboard[10][10])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (chessboard[i][j] == 1)
			{
				c = j + '0';
				write(1, &c, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	is_diagonal(int x1, int y1, int x2, int y2)
{
	int	abscissa_diff;
	int	ordinate_diff;

	abscissa_diff = x1 - x2;
	if (abscissa_diff < 0)
		abscissa_diff = -abscissa_diff;
	ordinate_diff = y1 - y2;
	if (ordinate_diff < 0)
		ordinate_diff = -ordinate_diff;
	if (abscissa_diff == ordinate_diff)
		return (1);
	else
		return (0);
}

int	is_valid_position(int chessboard[10][10], int row, int column)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (chessboard[i][j] == 1)
			{
				if (i == row || j == column || is_diagonal(i, j, row, column))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	solve(int chessboard[10][10], int column, int *counter)
{
	int	row;

	if (column == 10)
	{
		ft_print_result(chessboard);
		(*counter)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_valid_position(chessboard, row, column) == 1)
		{
			chessboard[row][column] = 1;
			solve(chessboard, column + 1, counter);
			chessboard[row][column] = 0;
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		chessboard[10][10];
	int		i;
	int		j;
	int		counter;

	counter = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			chessboard[i][j] = 0;
			j++;
		}
		i++;
	}
	solve(chessboard, 0, &counter);
	return (counter);
}
