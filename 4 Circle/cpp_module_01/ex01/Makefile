# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 14:01:17 by jupyo             #+#    #+#              #
#    Updated: 2025/03/09 14:01:24 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = ${SRC:.cpp=.o}

INCLUDE = -I .

CC = clang++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

.cpp.o:
		${CC} ${CPPFLAGS} ${INCLUDE} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
		${CC} ${CPPFLAGS} ${INCLUDE} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: clean all

.PHONY: all clean re
