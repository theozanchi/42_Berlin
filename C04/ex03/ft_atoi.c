/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:44:22 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 20:44:23 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *c)
{
	if (*c == ' ' || *c == '\f' || *c == '\n' || *c == '\r'
		|| *c == '\t' || *c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

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
