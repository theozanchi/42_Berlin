# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 17:58:34 by tzanchi           #+#    #+#              #
#    Updated: 2023/04/04 11:08:20 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIB		= libft.a
SRCDIR	= srcs
INCDIR	= includes

SRCS	=	${SRCDIR}/ft_putchar.c \
			${SRCDIR}/ft_swap.c \
			${SRCDIR}/ft_putstr.c \
			${SRCDIR}/ft_strlen.c \
			${SRCDIR}/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

all:	${LIB}

${LIB}:	${OBJS}
		ar rcs ${LIB} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${LIB}

re:		fclean all

.PHONY:	all clean fclean re
