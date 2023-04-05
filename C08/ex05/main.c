/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:59:32 by tzanchi           #+#    #+#             */
/*   Updated: 2023/04/01 14:56:39 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"

void				ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str	*array;

	if (argc <= 1)
		return (1);
	else
	{
		array = ft_strs_to_tab(argc - 1, argv + 1);
		ft_show_tab(array);
	}
}
