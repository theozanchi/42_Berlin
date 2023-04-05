/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:24:52 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/23 20:24:54 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
		return (0);
	}
}
