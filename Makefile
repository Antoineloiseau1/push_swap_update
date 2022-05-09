# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 17:24:39 by anloisea          #+#    #+#              #
#    Updated: 2022/05/09 17:10:00 by anloisea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
SRCS	= 	./srcs/main.c \
			./libft/ft_lstadd_back.c \
			./libft/ft_lstnew.c \
			./libft/ft_atoi.c \
			./libft/ft_lstadd_front.c \
			./libft/ft_lstclear.c \
			./srcs/ft_displaylst.c \
			./srcs/ft_swap.c \
			./srcs/ft_push.c \
			./srcs/ft_rotate.c \
			./srcs/ft_rev_rotate.c \
			./srcs/ft_error.c
			
OBJS	= ${SRCS:.c=.o}
HDR		= push_swap.h
CFLAGS	= -Wall -Wextra -Werror
CC		= cc
PRINTF	= ./ft_printf/
LIB 	= libprintf.a

all:		${NAME}

${NAME}:	${OBJS}
			@make all -C ${PRINTF}
			@cp ./ft_printf/libftprintf.a ${LIB}
			${CC} ${CFLAGS} ${OBJS} -L. -lprintf -o ${NAME} 

clean:
			@make clean -C ${PRINTF}
			rm -rf ${OBJS}

fclean:		clean
			make fclean -C ${PRINTF}
			rm -rf ${NAME} ${LIB}

re:			fclean all

.PHONY:		all clean fclean re
