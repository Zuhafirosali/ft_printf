# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 17:09:14 by zfiros-a          #+#    #+#              #
#    Updated: 2023/08/09 13:28:44 by zfiros-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = CC

CFLAGS = -Wall -Wextra -Werror 

SRC := 	source/ft_printf.c \
		source/ft_check.c \
		source/ft_putc.c \
		source/ft_puts.c \
		source/ft_putp.c \
		source/ft_putd.c \
		source/ft_putu.c \
		source/ft_putx.c \
		source/ft_strlen.c \
		source/ft_nbrlen.c \
		source/ft_putnbr.c \
		
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all