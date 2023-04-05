/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_with_main_dictionary.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:24:43 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 14:59:42 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_analysis_functions.h"

/*count_digits_in_string returns an array of 2 integers: output[0] is the sign
of the string and output[1] is the number inside the string*/

int	*count_digits_in_string(char *str)
{
	int	output[2];

	output[0] = 1;
	output[1] = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			output[0] *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		output[1]++;
		str++;
	}
	return (output);
}

/*clean_entry_string takes a string and deletes the unrelevant characters
like spaces, multiple + and - signs and characters after the last digit*/

char	*clean_entry_string(char *str)
{
	char	*output;
	int		i;

	if (count_digits_in_string(str)[0] == -1)
		output = malloc((count_digits_in_string(str)[1] + 2) * sizeof(char));
	else
		output = malloc((count_digits_in_string(str)[1] + 2) * sizeof(char));
	i = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
		str++;
	if (count_digits_in_string(str)[0] == -1)
	{
		output[i] = '-';
		i++;
	}
	while (ft_isdigit(*str))
	{
		output[i] = *str;
		i++;
		str++;
	}
	return (output);
}

/*char	*convert_with_main_dictionary(char *str)
{
	
}*/
