/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:27:47 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 18:51:58 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

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

	tab[0] = "a5c";
	tab[1] = "d5f";
	tab[2] = NULL;
	printf("%d", ft_any(tab, &ft_is_not_low_alpha));
}
