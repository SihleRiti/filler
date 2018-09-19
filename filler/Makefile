# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriti <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/30 11:39:28 by sriti             #+#    #+#              #
#    Updated: 2018/08/30 11:41:42 by sriti            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

SRC = main.c \
	  algo.c \
	  get.c \
	  insert.c \
	  support.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
		@make -C libft/ fclean && make -C libft
		@gcc -Wall -Wextra -Werror -c $(SRC)
		@gcc -Wall -Wextra -Werror $(OBJ) libft/libft.a -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(NAME).trace
	@/bin/rm -f libft/libft.a

re: fclean all

