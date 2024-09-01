NAME		=	philo

CFLAGS		=	-Wall -Wextra -Werror -I -g # -g3 -fsanitize=address

SRC		=	main.c \
				philo.c \
				data.c \
				input.c \
				monitor.c \
				simulation.c \
				utils.c


OBJ_DIR		=	./obj
OBJS		=	$(addprefix $(OBJ_DIR)/, $(patsubst %.c,%.o,$(SRC)))

all: $(NAME)

$(OBJ_DIR)/%.o	: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)			: $(OBJS)
	cc $(CFLAGS) -o $@ $^ -lpthread

clean			:
	rm -rf $(OBJ_DIR)

fclean			: clean
	rm -f $(NAME)

re				: fclean all

.PHONY: clean fclean all re
