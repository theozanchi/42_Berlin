/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:41:03 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 16:41:05 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	str1 = "cgeebe";
	str2 = "bdiuwbQ";
	printf("ft returns %i for str %s\n", ft_str_is_lowercase(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_lowercase(str2), str2);
}
*/
