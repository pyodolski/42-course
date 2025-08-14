# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 20:40:00 by jupyo             #+#    #+#              #
#    Updated: 2025/08/14 21:50:08 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRC = main.cpp Bureaucrat.cpp AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp

OBJS = ${SRC:.cpp=.o}

INCLUDE = -I .

CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

.cpp.o:
		${CC} ${CPPFLAGS} ${INCLUDE} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
		${CC} ${CPPFLAGS} ${INCLUDE} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}
		find . -name "*_shrubbery" -type f -delete

fclean:	clean
		${RM} ${NAME}

re: clean all

.PHONY: all clean re