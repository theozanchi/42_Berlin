/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionaries_structures.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:45:08 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 15:06:12 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARIES_STRUCTURES_H
# define DICTIONARIES_STRUCTURES_H

typedef struct s_dict
{
	int		nbr;
	char	*letters;
	t_dict	*next;
}	t_dict;

#endif
