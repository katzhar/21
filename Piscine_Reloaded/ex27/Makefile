# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aernie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 23:06:52 by aernie            #+#    #+#              #
#    Updated: 2019/04/07 23:23:46 by aernie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./srcs/open.c

OBJECTS = $(SRC:.c =.o)

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
		gcc -o  $(NAME) $(SRC)

clean:
	/bin/rm -f open.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
