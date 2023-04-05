/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:21:00 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:21:01 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: one argument only expected");
		return (1);
	}
	else
	{
		printf("%d", ft_sqrt(atoi(argv[1])));
		return (0);
	}
}
