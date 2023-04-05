/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:35:34 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:35:35 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divider;

	divider = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (divider < nb)
		{
			if (nb % divider == 0)
				return (0);
			divider++;
		}
		return (1);
	}
}
