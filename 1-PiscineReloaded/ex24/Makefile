# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aernie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 08:52:47 by aernie            #+#    #+#              #
#    Updated: 2019/04/06 19:28:20 by aernie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECTS = $(SRC:.c =.o)

HEADERS = includes/ft.h

all: $(NAME)

$(NAME):
		gcc -c -I $(HEADERS) -Wall -Wextra -Werror $(SRC)
		ar rc $(NAME) *.o

clean:
		/bin/rm -f *.o

fclean: clean 
		/bin/rm -f $(NAME)

re: fclean all
