/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:02:59 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 14:53:02 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "This is";
	char	dest[] = "        ";

	printf("Source string is '%s'\n", src);
	ft_strncpy(dest, src, 10);
	printf("src after ft is '%s'\n", src);
	printf("dest after ft is '%s'", dest);
}
*/
