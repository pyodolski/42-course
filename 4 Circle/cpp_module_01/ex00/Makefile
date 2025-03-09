# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 22:21:05 by jupyo             #+#    #+#              #
#    Updated: 2025/03/09 13:33:25 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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
