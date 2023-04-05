/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:37:47 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 16:37:49 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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

	str1 = "1598742";
	str2 = "154758x";
	printf("ft returns %i for str %s\n", ft_str_is_numeric(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_numeric(str2), str2);
}
*/
