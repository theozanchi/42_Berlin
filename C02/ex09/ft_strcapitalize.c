/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:04:05 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/19 17:04:06 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

bool	ft_is_alpha(char *c)
{
	if (*c < 'A' || (*c > 'Z' && *c < 'a') || *c > 'z')
		return (0);
	else
		return (1);
}

int	ft_is_numeric(char *c)
{
	if (*c >= '0' && *c <= '9')
		return (1);
	else
		return (0);
}

void	ft_upcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	ft_lowcase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_upcase(&str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(&str[i - 1]) == 1 || ft_is_numeric(&str[i - 1]) == 1)
			ft_lowcase(&str[i]);
		else
			ft_upcase(&str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}
