/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student@42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:13:04 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/22 00:25:15 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char    *s1;
    char    *s2;
	char	*s3;

    s1 = "This is a first string";
    s2 = "This is a second string that should return something negative";
	s3 = "This is A final test";
    printf("s1 is '%s'\n", s1);
    printf("s2 is '%s'\n", s2);
    printf("ft_strncmp(s1, s2, 50) returns %i\n", ft_strncmp(s1, s2, 50));
	printf("Normal strncmp function gives %i\n", strncmp(s1, s2, 50));
    printf("ft_strncmp(s1, s2, 10) returns %i\n", ft_strncmp(s1, s2, 10));
	printf("Normal strncmp function gives %i\n", strncmp(s1, s2, 10));
	printf("ft_strncmp(s1, s3, 10) returns %i\n", ft_strncmp(s1, s3, 10));
	printf("Normal strncmp function gives %i\n", strncmp(s1, s3, 10));
}
