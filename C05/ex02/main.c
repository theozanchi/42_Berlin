/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:45:16 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 19:45:17 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: two arguments only expected");
		return (1);
	}
	else
	{
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
		return (0);
	}
}
