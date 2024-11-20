# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 09:41:28 by rhvidste          #+#    #+#              #
#    Updated: 2024/11/20 10:26:31 by rhvidste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf_test
INCLUDE = include/
LIBFT	= libft/libft.a
SRCDIR = src/
SRC_FILES = ft_printf ft_printchar ft_printstr ft_printnbr ft_printptr ft_printunsigned \
			ft_print_hex ft_printpercent
TEST_FILE = ft_printf_test.c
SRC = $(addprefix $(SRCDIR), $(addsuffix .c, $(SRC_FILES)))
CC = cc
FLAGS = -Werror -Wextra -Wall -I $(INCLUDE)

$(NAME): $(LIBFT) $(SRC)
		$(CC) $(FLAGS) $(TEST_FILE) $(SRC) $(LIBFT) -o $(NAME)
all: $(NAME)

clean:
		rm -f $(NAME)

re: clean all
