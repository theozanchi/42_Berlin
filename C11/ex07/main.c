/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:55:22 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 13:59:34 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_advanced_sort_string_tab(argv + 1, &ft_strcmp);
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
