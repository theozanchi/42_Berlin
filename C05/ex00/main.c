/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:32:59 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/23 11:33:01 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: one argument only is expected");
		return (1);
	}
	else
	{
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
		return (0);
	}
}
