/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:26:08 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 00:30:18 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char	s1[100] = "After this should come";
	char	test[100] = "After this should come";
	char	*s2;

	s2 = " that";
	printf("s1 is '%s'\n", s1);
	printf("s2 is '%s'\n", s2);
	ft_strcat(s1, s2);
	strcat(test, s2);
	printf("%s\n", s1);
	printf("%s\n", test);
}

