# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 13:04:36 by josemigu          #+#    #+#              #
#    Updated: 2025/04/04 19:03:26 by josemigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_display_file.c srcs/ft_putchar.c srcs/ft_putstr.c
INCLUDES = includes
OBJS = ${SRCS:.c=.o}
OUT_FILE_NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ${INCLUDES}

RM = rm -f


all: ${OUT_FILE_NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${OUT_FILE_NAME}

%.o: %.c 
	${CC} ${CFLAGS} -c $< -o $@

${OUT_FILE_NAME}: ${OBJS}
	${CC} ${OBJS} -o ${OUT_FILE_NAME}

.PHONY: all clean fclean
