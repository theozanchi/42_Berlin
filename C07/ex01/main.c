/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:26:02 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/27 16:26:04 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char *argv[])
{
	int	i;
	int	length;
	int	*array;

	if (argc != 3)
	{
		printf("Error: two arguments");
		return (1);
	}
	length = atoi(argv[2]) - atoi(argv[1]);
	i = 0;
	array = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i < length)
	{
		printf("%d ", array[i]);
		i++;
	}
}
