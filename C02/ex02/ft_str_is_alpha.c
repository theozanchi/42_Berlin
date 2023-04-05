/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:18:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 16:18:46 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		else
			i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "abHdgcjgF";
	str2 = "buBdidb Ibd";
	printf("ft returns %i for str %s\n", ft_str_is_alpha(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_alpha(str2), str2);
}
*/
