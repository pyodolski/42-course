SRCS	= ./srcs/main.c				\
		 ./srcs/get_dico.c			\
		  ./srcs/utils.c				\
		  ./srcs/parse_file.c			\
		  ./srcs/print_nb.c			\
		  ./srcs/free_dico.c			\
		  ./srcs/make_intern_dico.c	\
		  ./srcs/print_unity.c

INCDIR	=./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror


.c.o:
			${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
