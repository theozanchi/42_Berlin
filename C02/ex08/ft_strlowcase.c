/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:53:35 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 14:53:25 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "WE WILL PUT THIS IN LOWERCASE!";

	printf("%s\n", ft_strlowcase(str));
}
*/
