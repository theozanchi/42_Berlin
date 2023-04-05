/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:42:04 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 20:42:05 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: there should be exactly two arguments");
		return (1);
	}
	else
	{
		printf("%i", ft_atoi_base(argv[1], argv[2]));
		return (0);
	}
}
