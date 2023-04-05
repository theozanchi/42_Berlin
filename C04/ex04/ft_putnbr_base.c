/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:46:11 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 16:46:12 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char *c)
{
	if (*c == ' ' || *c == '\f' || *c == '\n' || *c == '\r'
		|| *c == '\t' || *c == '\v')
		return (1);
	else
		return (0);
}

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;
	long	long_nbr;

	if (is_base_valid(base) == 0)
		return ;
	else
	{
		base_length = ft_strlen(base);
		long_nbr = nbr;
		if (long_nbr < 0)
		{
			write(1, "-", 1);
			long_nbr = long_nbr * -1;
		}
		if (long_nbr < base_length)
			ft_putchar(base[long_nbr % base_length]);
		else
		{
			ft_putnbr_base(long_nbr / base_length, base);
			ft_putnbr_base(long_nbr % base_length, base);
		}
	}
}
