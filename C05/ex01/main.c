/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:56:48 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/23 14:56:50 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: one argument only is expected");
		return (1);
	}
	else
	{
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
		return (0);
	}
}
