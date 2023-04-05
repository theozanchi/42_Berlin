/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:41:03 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 16:50:59 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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

	str1 = "This string printable";
	str2 = "But not this one\a";
	printf("ft returns %i for str %s\n", ft_str_is_printable(str1), str1);
	printf("ft returns %i for str %s\n", ft_str_is_printable(str2), str2);
}
*/
