/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:20:55 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:20:56 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result * result <= nb && result <= 46340)
	{
		if (result * result == nb)
			return (result);
		else
			result++;
	}
	return (0);
}
