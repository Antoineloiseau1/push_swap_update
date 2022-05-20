# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 17:24:39 by anloisea          #+#    #+#              #
#    Updated: 2022/05/20 16:07:03 by anloisea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
SRCS		= 	./srcs/push_swap.c \
				./libft/ft_lstadd_back.c \
				./libft/ft_lstnew.c \
				./srcs/ft_atoi.c \
				./libft/ft_lstadd_front.c \
				./libft/ft_lstclear.c \
				./srcs/display_lst.c \
				./srcs/ft_swap.c \
				./srcs/ft_push.c \
				./srcs/ft_rotate.c \
				./srcs/ft_rev_rotate.c \
				./libft/ft_split.c \
				./srcs/check_for_char.c \
				./srcs/check_double.c \
				./srcs/parse.c \
				./libft/ft_isdigit.c \
				./srcs/utils.c\
				./srcs/sort_three.c \
				./srcs/create_place.c \
				./srcs/sort_five.c \
				./libft/ft_lstlast.c
			
OBJS	= 		${SRCS:.c=.o}

HDR		= push_swap.h
CFLAGS	= -Wall -Wextra -Werror
CC		= cc -g
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

debug:
			@make all -C ${PRINTF}
			@cp ./ft_printf/libftprintf.a ${LIB}
			gcc -g ${CFLAGS} ${SRCS} -L. -lprintf -o ${NAME} -fsanitize=address

.PHONY:		all clean fclean re
