/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:14:34 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/30 13:05:32 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);
//int		ft_count_substrings(char *str, char *charset);

/*
int	main(int argc, char **argv)
{
	char	**substrs;
	int		i;

	if (argc != 3)
		return (1);
	substrs = ft_split(argv[1], argv[2]);
	i = 0;
	while (i < ft_count_substrings(argv[1], argv[2]))
	{
		printf("%s\n", substrs[i]);
		i++;
	}
	i = 0;
	while (substrs[i] != NULL)
	{
		free(substrs[i]);
		i++;
	}
	free (substrs);
	return (0);
}
*/

int	main(void)
{
	char	*str;
	char	*charset;
	char	**substrs;
	int		i;

	str = "Ha ic b";
	charset = " ";
	substrs = ft_split(str, charset);
	i = 0;
	while (i < 3)
	{
		printf("%s\n", substrs[i]);
		i++;
	}
	return (0);
}
