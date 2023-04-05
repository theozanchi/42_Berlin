/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:33:54 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/27 20:33:55 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char *argv[])
{
	int	*range;
	int	length;
	int	i;

	if (argc != 3)
	{
		printf("3 arguments required");
		return (1);
	}
	else
	{
		length = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
		i = 0;
		while (i < length)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\nLength of range is %d", length);
		return (0);
	}
}
