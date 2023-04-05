/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:25:45 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 12:28:48 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_sort_string_tab(argv + 1);
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
		return (0);
	}
	else
		return (1);
}
