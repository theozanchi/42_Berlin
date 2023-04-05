/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <albermud@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:09:40 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/18 19:36:39 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
THIS IS THE BONUS SUBJECT. THE MAIN SUBJECT IS COMMENTED BELOW ON LINE 74.
*/

#include <unistd.h>

void	rush(int x, int y);

int	ft_convert_to_int(char *string)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (string[i] != '\0')
	{
		result = result * 10 + (string[i] - '0');
		i++;
	}
	return (result);
}

int	ft_is_a_number(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	width;
	int	length;

	if (argc != 3)
	{
		write(1, "Error, two arguments only", 25);
		return (1);
	}
	else if (ft_is_a_number(argv[1]) == 1 || ft_is_a_number(argv[2]) == 1)
	{
		write(1, "Error, at least one arg is not a positive int", 58);
		return (1);
	}
	else
	{
		width = ft_convert_to_int(argv[1]);
		length = ft_convert_to_int(argv[2]);
		rush(width, length);
		return (0);
	}
}

/* THIS IS THE MAIN SUBJECT WE HAD TO SUBMIT
int	main(void)
{
	rush(10, 4);
}
*/
