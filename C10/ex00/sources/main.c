/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:17:48 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/05 10:23:16 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "errors.h"
#include "string_functions.h"

int	ft_display_file(char *file_path)
{
	int		file;
	char	buffer[1024];
	int		bytes_read;

	file = open(file_path, O_RDONLY);
	if (file < 0)
		return (-1);
	bytes_read = read(file, buffer, 1024);
	while (bytes_read > 0)
	{
		ft_putstr(buffer);
		bytes_read = read(file, buffer, 1024);
	}
	close(file);
	return (1);
}

int	main(int argc, char **argv)
{
	int	display_file;

	if (argc <= 1)
	{
		write(STDERR_FILENO, NOARG_ERR, ft_strlen(NOARG_ERR));
		return (1);
	}
	else if (argc > 2)
	{
		write(STDERR_FILENO, TOOM_ARG_ERR, ft_strlen(TOOM_ARG_ERR));
		return (1);
	}
	else
	{
		display_file = ft_display_file(argv[1]);
		if (display_file == -1)
		{
			write(STDERR_FILENO, READ_ERR, ft_strlen(READ_ERR));
			return (1);
		}
		else
			return (0);
	}
}
