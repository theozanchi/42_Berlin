/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:59:24 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 23:36:16 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
