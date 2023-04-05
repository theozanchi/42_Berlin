/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:55:42 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 19:55:43 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: two arguments only expected");
		return (1);
	}
	else
	{
		printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
		return (0);
	}
}
