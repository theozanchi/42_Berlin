/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:15:58 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/30 11:02:58 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

long	base_to_long(char *str, char *base);
void	long_to_base(long nbr, char *base, char *str, int index);

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ' || (str[i] >= 9
				&& str[i] <= 13))
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_long;
	char	*result;

	result = malloc(34 * sizeof(char));
	if (is_base_valid(base_from) == 0 || is_base_valid(base_to) == 0)
	{
		free(result);
		return (NULL);
	}
	nbr_long = base_to_long(nbr, base_from);
	if (nbr_long < -2147483648 || nbr_long > 2147483647)
	{
		free(result);
		return (NULL);
	}
	long_to_base(nbr_long, base_to, result, 0);
	return (result);
}
