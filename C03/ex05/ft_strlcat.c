/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:30:51 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 00:06:52 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size > dest_length + 1)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[dest_length + i] = src[i];
			i++;
		}
		dest[dest_length + i] = '\0';
	}
	return (dest_length + src_length);
}
