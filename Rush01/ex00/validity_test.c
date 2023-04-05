/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:18:28 by dlu               #+#    #+#             */
/*   Updated: 2023/03/26 18:00:52 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_by_num(int board[][4], int row, int col, int num)
{
	int	i;

	i = -1;
	while (++i < 4)
		if (board[col][i] == num)
			return (0);
	while (--i >= 0)
		if (board[i][row] == num)
			return (0);
	return (1);
}

int	is_valid_by_view(int forward, int backward, int num[])
{
	int	view;
	int	peak;
	int	i;

	i = -1;
	view = 0;
	peak = 0;
	while (++i < 4)
		if ((num[i] > peak) && ++view)
			peak = num[i];
	if (view != forward)
		return (0);
	peak = 0;
	view = 0;
	while (--i >= 0)
		if ((num[i] > peak) && ++view)
			peak = num[i];
	if (view != backward)
		return (0);
	return (1);
}

int	is_valid_by_input(int board[][4], int key[], int pos[], int num)
{
	int	sequence[4];
	int	i;

	if (pos[0] == 3)
	{
		i = -1;
		while (++i < 4)
			sequence[i] = board[pos[1]][i];
		sequence[3] = num;
		if (!is_valid_by_view(key[pos[1]], key[pos[1] + 4], sequence))
			return (0);
	}
	if (pos[1] == 3)
	{
		i = -1;
		while (++i < 4)
			sequence[i] = board[i][pos[0]];
		sequence[3] = num;
		if (!is_valid_by_view(key[pos[0] + 8], key[pos[0] + 12], sequence))
			return (0);
	}
	return (1);
}

int	is_valid(int board[][4], int key[], int pos[], int num)
{
	if (!is_valid_by_num(board, pos[0], pos[1], num))
		return (0);
	if (!is_valid_by_input(board, key, pos, num))
		return (0);
	return (1);
}
