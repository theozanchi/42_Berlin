/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:02:33 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 11:03:01 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "This is a test for source";
	char	dest[] = "This is a test for destination";

	ft_strcpy(dest, src);
	printf("%s\n", src);
	printf("%s", dest);
}
*/
