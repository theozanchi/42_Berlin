/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:19:26 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 15:19:29 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		return (0);
	}
	else
	{
		printf("Wrong number of arguments");
		return (1);
	}
}
