# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 11:41:48 by tzanchi           #+#    #+#              #
#    Updated: 2023/04/01 11:54:24 by tzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 
OBJS		= ${SRCS:.c=.o}
PRE			= ./source_files/
HEAD		= ./headers/
DICT		= ./dictionaries/

NAME		= rush-02

CC			= gcc
CFLAGS		= -Wextra -Werror -Wall

all:		${NAME}

${NAME}:	${OBJ}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
