/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:03:53 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/25 20:03:54 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
