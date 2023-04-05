# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 17:08:56 by tzanchi           #+#    #+#              #
#    Updated: 2023/04/02 17:53:56 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
