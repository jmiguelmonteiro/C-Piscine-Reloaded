# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 13:04:36 by josemigu          #+#    #+#              #
#    Updated: 2025/04/04 11:01:40 by josemigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDES = includes
OBJS = ${SRCS:.c=.o}
OUT_FILE_NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ${INCLUDES}
AR = ar crs

RM = rm -f

.PHONY: all clean fclean re

all: ${OUT_FILE_NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${OUT_FILE_NAME}

re: fclean all

%.o: %.c 
	${CC} ${CFLAGS} -c $< -o $@

${OUT_FILE_NAME}: ${OBJS}
	${AR} ${OUT_FILE_NAME} ${OBJS}

