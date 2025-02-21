# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:55:24 by jupyo             #+#    #+#              #
#    Updated: 2025/02/21 19:28:19 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone

SRC=megaphone.cpp

CC=clang++

CFLAGS= -Wall -Werror -Wextra -std=c++98 -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
