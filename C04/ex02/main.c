/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:23:01 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 15:23:02 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error, one argument only");
		return (1);
	}
	else
	{
		ft_putnbr(atoi(argv[1]));
		return (0);
	}
}
