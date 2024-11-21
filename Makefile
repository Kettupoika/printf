# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 09:44:46 by rhvidste          #+#    #+#              #
#    Updated: 2024/11/21 10:53:17 by rhvidste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_print_test
INCLUDE = include/
LIB		= libftprintf.a
SRC		= ft_printf_test.c
CC		= cc
FLAGS	= -Werror -Wextra -Wall -I $(INCLUDE)
#FLAGS	= -I $(INCLUDE)

$(NAME): $(LIB) $(SRC)
		$(CC) $(FLAGS) $(SRC) $(LIB) -o $(NAME)

all: $(NAME)

clean:
		rm -f $(NAME)

re: clean all
