/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_analysis_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:32:04 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/01 17:00:58 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (0);
	else
		return (1);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
