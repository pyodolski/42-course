# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/28 16:38:08 by jupyo             #+#    #+#              #
#    Updated: 2025/01/24 16:39:05 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	philo

CFLAGS		=	-Wall -Wextra -Werror -I -g # -g3 -fsanitize=address

FILE		=	main.c \
				actions.c \
				clean_exit.c \
				utils.c


OBJ_DIR		=	./obj
OBJS		=	$(addprefix $(OBJ_DIR)/, $(patsubst %.c,%.o,$(FILE)))

all: $(NAME)

$(OBJ_DIR)/%.o	:  %.c
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
