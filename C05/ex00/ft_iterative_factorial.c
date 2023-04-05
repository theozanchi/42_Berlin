/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:32:31 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/23 11:32:54 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		result = nb;
		while (nb-- > 1)
			result = result * nb;
		return (result);
	}
}
