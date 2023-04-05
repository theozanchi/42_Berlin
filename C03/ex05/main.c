/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:43:38 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 23:47:04 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "test";
	char	dest[20] = "This is";

	ft_strlcat(dest, src, 10);
	printf("%s'\n", dest);
}
