/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:15:47 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/29 17:13:14 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	else
	{
		printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
		return (0);
	}
}
