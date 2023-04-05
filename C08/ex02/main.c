/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:41:37 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/30 21:44:14 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d", ABS(atoi(argv[1])));
}
