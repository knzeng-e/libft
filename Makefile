# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/13 19:06:45 by knzeng-e          #+#    #+#              #
#    Updated: 2016/04/01 05:21:57 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = *.c

OBJ = *.o

HEAD = libft.h

FLAGS = -Wall -Werror -Wextra

$(NAME): all

all:
	@$(CC) -c $(FLAGS) -I$(HEAD) $(SRCS)
	@#$(CC) $(OBJ) -o $(NAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean: all
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make all

