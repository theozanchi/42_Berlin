/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:46:05 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 16:46:06 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: there should be exactly two arguments");
		return (1);
	}
	else
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		return (0);
	}
}
