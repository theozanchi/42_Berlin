/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:31:00 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 15:13:36 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		count_substrs(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**substrs;

	if (argc == 3)
	{
		substrs = ft_split(argv[1], argv[2]);
		while (*substrs)
		{
			printf("%s\n", *substrs);
			substrs++;
		}
	}
	else
		return (1);
}
