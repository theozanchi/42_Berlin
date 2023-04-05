/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:56:23 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/16 17:18:18 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i <= 122)
	{
		write (1, &i, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
