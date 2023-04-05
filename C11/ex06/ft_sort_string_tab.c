/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:38:59 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 14:23:12 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tab_length(char **tab)
{
	int	length;

	length = 0;
	while (*tab)
	{
		length++;
		tab++;
	}
	return (length);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	tab_length;

	tab_length = ft_tab_length(tab);
	j = 1;
	while (j < tab_length)
	{
		i = 0;
		while (i < tab_length - j)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}
