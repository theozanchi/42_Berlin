/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 21:40:35 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/01 17:36:34 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*ft_strslen calculates the length of the final string, separators and null
terminator included*/

int	ft_strslen(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	j;

	i = 0;
	length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			length++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	length += i * (size - 1) + 1;
	return (length);
}

/*add_string copies src inside destination beginning at position index and
returns the position where it stopped copying*/

int	add_string(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[index + i] = src[i];
		i++;
	}
	return (index + i);
}

/*ft_strjoin joins all size strings contained in strs, separates them by the
string "sep", with a null terminator and returns a pointer to the string it
created*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		index;
	int		final_length;

	if (size <= 0)
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	final_length = ft_strslen(size, strs, sep);
	str = malloc(final_length * sizeof(char));
	i = 0;
	index = 0;
	while (i < size)
	{
		index = add_string(str, strs[i], index);
		if (i != size - 1)
			index = add_string(str, sep, index);
		i++;
	}
	str[final_length - 1] = '\0';
	return (str);
}
