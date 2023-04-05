/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:56:14 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 21:09:59 by tzanchi          ###   ########.fr       */
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

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_in_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_in_charset(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && is_in_charset(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !is_in_charset(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
