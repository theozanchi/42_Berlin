/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:14:41 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/30 13:45:00 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_substrings(char *str, char *charset)
{
	int	count;
	int	previous_char_is_in_charset;

	if (!*str)
		return (0);
	count = 0;
	previous_char_is_in_charset = 1;
	while (*str)
	{
		if (!is_in_charset(*str, charset) && previous_char_is_in_charset)
			count++;
		previous_char_is_in_charset = is_in_charset(*str, charset);
		str++;
	}
	return (count);
}

void	get_substrings_length(char *str, char *charset, char **substrs)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (is_in_charset(*str, charset))
		str++;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
			length++;
		else if (!is_in_charset(*(str - 1), charset))
		{
			substrs[i] = malloc((length + 1) * sizeof(char));
			length = 0;
			i++;
		}
		str++;
	}
	if (is_in_charset(*(str - 1), charset))
		substrs[i] = NULL;
	else
	{
		substrs[i] = malloc((length + 1) * sizeof(char));
		substrs[i + 1] = NULL;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**substrs;
	int		i;
	int		j;

	substrs = (char **)malloc((ft_count_substrings(str, charset) + 1) * sizeof(char *));
	get_substrings_length(str, charset, substrs);
	i = 0;
	j = 0;
	while (is_in_charset(*str, charset))
		str++;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			substrs[i][j] = *str;
			j++;
		}
		if (is_in_charset(*str, charset) || !*(str + 1))
		{
			substrs[i][j] = '\0';
			i++;
			j = 0;
		}
		str++;
	}
	return (substrs);
}
