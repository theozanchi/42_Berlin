/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:16:10 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 15:16:12 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("String length is %i", ft_strlen(argv[1]));
		return (0);
	}
	else
	{
		printf("Wrong number of arguments");
		return (1);
	}
}
