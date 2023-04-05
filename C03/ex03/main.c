/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:37:19 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 00:38:51 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[100] = "After this should come";
	char	test[100] = "After this should come";
	char	*s2;

	s2 = " some of that bigger string";
	printf("s1 is '%s'\n", s1);
	printf("s2 is '%s'\n", s2);
	ft_strncat(s1, s2, 20);
	printf("%s\n", s1);
	printf("Comparison with strcat :\n");
	strncat(test, s2, 20);
	printf("%s\n", test);
	printf("Are the results identical? %i ", strcmp(test, s1));
}
