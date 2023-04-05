/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:08:37 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/04 14:56:24 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "error_messages.h"

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = convert_with_main_dictionary(argv[1]);
		/*This is how the function should work:
		1. Convert the initial string into a cleaned string
		2. Load numbers.dict into a personalised structure, sorted in ascending
		order
		3. Decompose the cleaned string into digits
		4. For each digits, decompose it using the dictionary :
			t_dict.letters */
		if (!str)
		{
			write(STDERR_FILENO, DICT_ERROR, ft_strlen(DICT_ERROR));
			return (1);
		}
		else
		{
			write(STDOUT_FILENO, str, ft_strlen(str));
			return (0);
		}
	}
	/*else if (argc == 3)
	{
		This is how the code should work:
		1. Recognise that this is a new dictionsry entry and check that it respects
			the format (digits first, then letters)
		2. Check that the entry is not already in the dictionary 
		3. If it is not, open and modify numbers.dict (add it at the end)
		4. Close numbers.dict and end
	}*/
	else
	{
		write(STDERR_FILENO, ERROR, ft_strlen(ERROR));
		return (1);
	}
}
