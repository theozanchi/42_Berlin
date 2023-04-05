/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:41:03 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 16:48:43 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

	str1 = "AGEBEUI";
	str2 = "ATVE EJ";
	printf("ft returns %i for str %s\n", ft_str_is_uppercase(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_uppercase(str2), str2);
}
*/
