/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dictionary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:49:08 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/02 16:10:13 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionaries_structures.h"
#include "string_manip_functions.h"
#include "string_analysis_functions.h"
#include <fcntl.h>
#include <stdio.h>

t_dict	*create_entry(int nbr, char *letters)
{
	t_dict	*entry;

	entry = (t_dict *)malloc(sizeof(t_dict));
	entry->nbr = nbr;
	entry->letters = malloc(ft_strlen(letters) * sizeof(char));
	entry->letters = ft_strdup(letters);
	return (entry);
}

t_dict	*add_entry(t_dict *head, t_dict *new_entry)
{
	t_dict	*current;

	if (!head || new_entry->nbr < head->nbr)
	{
		new_entry->next = head;
		return (new_entry);
	}
	current = head;
	while (current->next && current->next->nbr < new_entry->nbr)
		current = current->next;
	new_entry->next = current->next;
	current->next = new_entry;
	return (head);
}

t_dict	load_dictionary(void)
{
	int		file;
	t_dict	*dict_head;
	char	buffer[256];
	int		index;

	file = open("numbers.dict", O_RDONLY);
	dict_head = NULL;
	index = 0;
	while (read(file, &buffer[index], 1) > 0)
	{
		if (buffer[index] == '\n')
		{
			buffer[index] == '\0';
		}
	}
}
