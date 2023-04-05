/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:45:06 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:45:07 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: one argument only expected");
		return (1);
	}
	else
	{
		printf("%d", ft_find_next_prime(atoi(argv[1])));
		return (0);
	}
}
