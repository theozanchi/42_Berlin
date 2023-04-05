/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 21:40:28 by tzanchi           #+#    #+#             */
/*   Updated: 2023/03/27 23:59:48 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	char	*result;

	result = ft_strjoin(argc - 2, argv + 1, argv[argc - 1]);
	printf("%s", result);
}
