/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manip_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:27:08 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/02 15:55:16 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *str)
{
	char	*dup;
	char	*dup_ptr;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	dup_ptr = dup;
	while (*str)
		*dup_ptr++ = *str++;
	*dup_ptr = '\0';
	return (dup);
}
