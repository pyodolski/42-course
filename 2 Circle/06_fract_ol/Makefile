# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 20:46:12 by jupyo             #+#    #+#              #
#    Updated: 2024/08/26 13:55:37 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME	= fractol

# Compiler
CC		= cc
CFLAGS	= -Werror -Wextra -Wall

# Minilibx
MLX_PATH	= minilibx-linux/
MLX_NAME	= libmlx.a
MLX			= $(MLX_PATH)$(MLX_NAME)

# Libft
LIBFT_PATH	= libft/
LIBFT_NAME	= libft.a
LIBFT		= $(LIBFT_PATH)$(LIBFT_NAME)

# Includes
INC			=	-I ./includes/\
				-I ./libft/\
				-I ./minilibx-linux/

# Sources
SRC_PATH	=	src/
SRC		=	main.c \
  			mlx_utils.c \
  			color_utils.c \
  			draw_fractal.c \
  			mlx_hooks.c \
  			mlx_hooks2.c \
  			canvas_utils.c \
  			utils.c

SRCS		= $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH	= obj/
OBJ			= $(SRC:.c=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJS) $(MLX) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX) $(LIBFT) $(INC) -lXext -lX11 -lm

$(MLX):
	make -C $(MLX_PATH)

$(LIBFT):
	make -C $(LIBFT_PATH)

# Clean up object files and executables
clean:
	rm -rf $(OBJ_PATH)
	make clean -C $(MLX_PATH)
	make clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re

