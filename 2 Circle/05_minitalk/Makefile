# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jupyo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            
#    Created: 2024/07/29 19:02:25 by jupyo             #+#    #+#              #
#    Updated: 2024/07/30 12:19:48 by jupyo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SER=src/server.c
CLI=src/client.c

UTILS=src/minitalk_utils.c

SERVER=server
CLIENT=client

CFLAGS= -Wall -Wextra -Werror
CC=gcc

all : $(SERVER) $(CLIENT)

$(SERVER) : $(SER) $(UTILS) 
	$(CC) $(CFLAGS) $^ -o $@
$(CLIENT) : $(CLI) $(UTILS) 
	$(CC) $(CFLAGS) $^ -o $@

clean:
	@rm -rf *.o
fclean:
	@rm -rf *.o  $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean all
