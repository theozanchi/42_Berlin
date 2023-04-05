# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 10:26:15 by tzanchi           #+#    #+#              #
#    Updated: 2023/04/05 10:26:41 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	ft_cat

SRCSDIR		=	./sources
HEADDIR		=	./includes

SRCS		=	${SRCSDIR}/

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
