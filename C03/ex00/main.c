/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:16:01 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 23:22:52 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;
//	char	*s3;
//	char	*s4;

	s1 = "abc";
	s2 = "abcd";
//	s3 = "abcd";
//	s4 = "This is a Third string that should return something positive";
	printf("s1 is '%s'\n", s1);
	printf("s2 is '%s'\n", s2);
//	printf("s3 is '%s'\n", s3);
//	printf("s4 is '%s'\n", s4);
	printf("ft_strcmp(s1, s2) returns %i\n", ft_strcmp(s1, s2));
	printf("strcmp(s1, s3) returns %i\n", strcmp(s1, s2));
//	printf("ft_strcmp(s1, s4) returns %i\n", ft_strcmp(s1, s4));
}
