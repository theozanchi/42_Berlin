/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:31:44 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 15:31:48 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Two many arguments, one expected");
		return (1);
	}
	else
	{
		printf("%i", ft_atoi(argv[1]));
	}
}
