/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:53:24 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/21 23:09:33 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0')
			{
				if (str[i + j] == to_find[j])
					j++;
				else
					break ;
			}
			if (j == ft_strlen(to_find))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
