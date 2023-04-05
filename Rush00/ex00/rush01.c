/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <albermud@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:25:49 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/18 19:07:19 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_first_line(int nb_of_columns)
{
	int	i;

	i = 1;
	while (i <= nb_of_columns)
	{
		if (i == 1)
			ft_putchar ('/');
		else if (i == nb_of_columns)
			ft_putchar ('\\');
		else
			ft_putchar ('*');
		i++;
	}
	ft_putchar ('\n');
}

void	ft_write_middle_line(int nb_of_columns)
{
	int	i;

	i = 1;
	while (i <= nb_of_columns)
	{
		if (i == 1 || i == nb_of_columns)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_write_last_line(int nb_of_columns)
{
	int	i;

	i = 1;
	while (i <= nb_of_columns)
	{
		if (i == 1)
			ft_putchar ('\\');
		else if (i == nb_of_columns)
			ft_putchar ('/');
		else
			ft_putchar ('*');
		i++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_write_first_line(x);
		else if (i == y)
			ft_write_last_line(x);
		else
			ft_write_middle_line(x);
		i++;
	}
}
