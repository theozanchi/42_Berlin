/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:41:56 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 20:41:58 by tzanchi          ###   ########.fr       */
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

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
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

int	str_base_compatible(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		if (j > ft_strlen(base))
			return (0);
		i++;
	}
	return (1);
}

int	ft_string_position(char *c, char *str)
{
	int	i;

	i = 0;
	while (*c != str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	base_length;

	if (is_base_valid(base) == 0 || str_base_compatible(str, base) == 0)
		return (0);
	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	base_length = ft_strlen(base);
	while (ft_string_position(&str[i], base) < base_length)
	{
		result = result * base_length + ft_string_position(&str[i], base);
		i++;
	}
	return (result * sign);
}
