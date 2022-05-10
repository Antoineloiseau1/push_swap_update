# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 15:16:13 by anloisea          #+#    #+#              #
#    Updated: 2022/05/10 13:03:38 by anloisea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= 	ft_printf.c \
			./libft/ft_putchar_len.c \
			./libft/ft_putstr_len.c \
			./libft/ft_strlen.c \
			./libft/ft_putunbr.c \
			./libft/ft_putnbr_len.c \
		  	./libft/ft_putunbr_len.c \
		  	./libft/ft_puthexa_len.c \
		  	./libft/ft_putmem_len.c

OBJS	= ${SRCS:.c=.o}

HDR	= ft_printf.h

CC		= gcc -g

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}: 	${OBJS}
	ar rc ${NAME} ${OBJS} ${HDR}


clean:
	rm -f ${OBJS}

fclean: 	clean
	rm -f ${NAME}

re: 		fclean all

.PHONY: all clean fclean re
