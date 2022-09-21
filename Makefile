# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 17:24:39 by anloisea          #+#    #+#              #
#    Updated: 2022/09/21 13:13:19 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
SRCS		= 	./srcs/push_swap.c \
				./srcs/utils.c\
				./srcs/parse.c \
				./srcs/create_place.c \
				./srcs/ft_push.c \
				./srcs/ft_rev_rotate.c \
				./srcs/ft_rotate.c \
				./srcs/ft_swap.c \
				./srcs/sort_functions.c
				
OBJS	= 		${SRCS:.c=.o}

HDR		= push_swap.h
CFLAGS	= -Wall -Wextra -Werror
CC		= cc -g
LIB		= ./libft/libft.a


all:		${LIB} ${NAME}

${LIB}:
			@make all -sC ./libft

${NAME}:	${LIB}	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -L./libft -lft -o ${NAME}
			@echo "\033[92mpush_swap compiled successfully\033[0m"

clean:
			@make clean -sC ./libft
			rm -rf ${OBJS}

fclean:		clean
			@make fclean -sC ./libft
			rm -rf ${NAME} ${LIB}

re:			fclean all

.PHONY:		all clean fclean re
