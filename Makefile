# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 09:51:19 by rsharipo          #+#    #+#              #
#    Updated: 2018/07/10 14:37:25 by rsharipo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mklib

LIB = libft.a

SRC = *.c

OBJ = *.o

HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(HEADER)
	ar rc libft.a $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(LIB)

re: fclean all
