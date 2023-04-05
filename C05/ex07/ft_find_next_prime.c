/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:45:11 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/29 14:44:06 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	result;

	result = nb;
	if (nb < 2)
		return (2);
	while (result <= 2147483647)
	{
		if (ft_is_prime(result))
			return (result);
		result++;
	}
	return (0);
}
