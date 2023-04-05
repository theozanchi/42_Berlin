# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 19:10:34 by tzanchi           #+#    #+#              #
#    Updated: 2023/04/05 10:20:58 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	ft_display_file

SRCSDIR		=	./sources
HEADDIR		=	./includes

SRCS		=	${SRCSDIR}/main.c \
				${SRCSDIR}/string_functions.c

OBJS		=	${SRCS:.c=.o}

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.c.o:
				${CC} ${CFLAGS} -I ${HEADDIR} -c $< -o $@

clean:
				rm -f ${OBJS}

fclean:			clean
				rm -f ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
