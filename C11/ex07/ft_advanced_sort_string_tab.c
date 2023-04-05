/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:53:07 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 14:24:02 by tzanchi          ###   ########.fr       */
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

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[i + 1]) > 0)
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}
