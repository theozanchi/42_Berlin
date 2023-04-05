/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:02:07 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/03 22:25:04 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "errors.h"
#include "string_functions.h"
#include "output_functions.h"
#include "calculator.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '/'
			&& *argv[2] != '*' && *argv[2] != '%')
		{
			write(1, "0\n", 2);
			return (1);
		}
		else if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
		{
			if (*argv[2] == '/')
				write(1, DIV_BY_ZERO, ft_strlen(DIV_BY_ZERO));
			if (*argv[2] == '%')
				write(1, MOD_BY_ZERO, ft_strlen(MOD_BY_ZERO));
			return (1);
		}
		ft_putnbr(call_math_ft(ft_atol(argv[1]), ft_atol(argv[3]), argv[2]));
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
