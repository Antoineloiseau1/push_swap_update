# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 17:24:39 by anloisea          #+#    #+#              #
#    Updated: 2022/09/18 15:18:21 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
SRCS		= 	./srcs/push_swap.c \
				./srcs/utils.c\
				./srcs/parse.c \
				./srcs/check_for_char.c \
				./srcs/display_lst.c \
				./srcs/check_double.c \
				./srcs/create_place.c \
				./srcs/ft_push.c \
				./srcs/ft_rev_rotate.c \
				./srcs/ft_rotate.c \
				./srcs/ft_swap.c \
				./srcs/sort_three.c \
				./srcs/sort_five.c
			
OBJS	= 		${SRCS:.c=.o}

HDR		= push_swap.h
CFLAGS	= -Wall -Wextra -Werror
CC		= cc -g
LIB		= ./libft/libft.a


all:		${LIB} ${NAME}

${LIB}:
			@make all -sC ./libft

${NAME}:	${LIB}	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -L./libft -lft -o ${NAME} 

clean:
			@make clean -sC ./libft
			rm -rf ${OBJS}

fclean:		clean
			@make fclean -sC ./libft
			rm -rf ${NAME} ${LIB}

re:			fclean all

# debug:
# 			@make all -C ${PRINTF}
# 			@cp ./ft_printf/libftprintf.a ${LIB}
# 			gcc -g ${CFLAGS} ${SRCS} -L. -lprintf -o ${NAME} -fsanitize=address

.PHONY:		all clean fclean re
