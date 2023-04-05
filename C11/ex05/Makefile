# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 19:35:04 by tzanchi           #+#    #+#              #
#    Updated: 2023/04/03 22:33:14 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

NAME		= do-op

SRCSDIR		= ./sources
HEADDIR		= ./includes

SRCS		=	${SRCSDIR}/calculator.c \
				${SRCSDIR}/main.c \
				${SRCSDIR}/math_functions.c \
				${SRCSDIR}/output_functions.c \
				${SRCSDIR}/string_functions.c

OBJS		= ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -I ${HEADDIR} -c $< -o $@

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
