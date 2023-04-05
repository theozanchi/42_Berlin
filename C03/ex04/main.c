/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:05:14 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 00:34:26 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "We should find some here";
	s2 = "some";
	s3 = "something";
	printf("%p\n", ft_strstr(s1, s2));
	printf("%c\n", *ft_strstr(s1, s2));
	printf("%s\n", ft_strstr(s1, s3));
	printf("Check with the normal function :\n");
	printf("%p\n", strstr(s1, s2));
	printf("%c\n", *strstr(s1, s2));
	printf("%s\n", strstr(s1, s3));
}
