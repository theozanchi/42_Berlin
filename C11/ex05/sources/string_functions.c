/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:06:18 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 22:00:38 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

int	ft_isspace(char *c)
{
	if (*c == ' ' || *c == '\f' || *c == '\n' || *c == '\r'
		|| *c == '\t' || *c == '\v')
		return (1);
	else
		return (0);
}

long	ft_atol(char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(&str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
