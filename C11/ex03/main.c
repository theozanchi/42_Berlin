/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:48:56 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 18:53:21 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int	ft_is_not_low_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (1);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	*tab[3];

	tab[0] = "abc";
	tab[1] = "de=f";
	tab[2] = "ijk855";
	printf("%d", ft_count_if(tab, 3, &ft_is_not_low_alpha));
}
