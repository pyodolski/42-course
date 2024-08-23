# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/22 16:17:33 by jupyo             #+#    #+#              #
#    Updated: 2024/08/22 16:17:35 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fractol
CC := gcc
CFLAGS := -Werror -Wall -Wextra
INC=/usr/include
INCLIB=$(INC)/../lib
MLX_PATH := ./minilibx-linux
MLX_LIB := -L$(MLX_PATH) -lmlx

LIBFT_PATH := libft
LIBFT_MAKE := $(MAKE) -C $(LIBFT_PATH)
LIBFT_LIB := -L./libft -lft

HEADER_FILES := fractol.h
SRCS := main.c \
  mlx_utils.c \
  color_utils.c \
  draw_fractal.c \
  mlx_hooks.c \
  mlx_hooks2.c \
  canvas_utils.c \
  utils.c
OBJS := ${SRCS:.c=.o}
DEPS := ${SRCS:.c=.d}

all: ${NAME}

%.o: %.c
	# flags -MMD -MP -MF for generating dependency files
	$(CC) $(CFLAGS)  -MMD -MP -MF $(<:.c=.d) -c $< -o $@

$(MLX_PATH):
	git clone https://github.com/42Paris/minilibx-linux.git $(MLX_PATH)
	make -C $(MLX_PATH)

-include $(DEPS)
$(NAME): $(MLX_PATH) $(OBJS)
	$(LIBFT_MAKE)
	$(CC) -o $(NAME) $(OBJS) $(LIBFT_LIB) $(MLX_LIB) -L$(INCLIB) -lXext -lX11 -lm -lbsd

clean:
	$(LIBFT_MAKE) clean
	${RM} ${OBJS}
	${RM} ${DEPS}

fclean: clean
	$(LIBFT_MAKE) fclean
	${RM} ${NAME}

re: fclean all

bonus: $(NAME)

.PHONY: all clean fclean re bonus
