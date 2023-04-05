/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:47:11 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 14:53:57 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char	src[] = "This is a test";
	char	dest[] = "                   ";

	printf("The string '%s' is %i characters long \n", src, ft_strlen(src));
	printf("Source string is '%s'\n", src);
	printf("ft returns %i\n", ft_strlcpy(dest, src, 10));
	printf("src after ft is '%s'\n", src);
	printf("dest after ft is '%s'", dest);
}
*/
