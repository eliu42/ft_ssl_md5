# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 11:02:46 by eliu              #+#    #+#              #
#    Updated: 2018/11/30 17:17:45 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./ft_ssl

CC = gcc
C_FLAGS = -Wall -Wextra -Werror
CLANG = -g
INC_FLAGS = -I include
LIBRARY = ./libft/libft.a

FILE_NAMES = main.c \
			 hash.c \
			 init.c \
			 parse.c \
			 store.c \
			 md5.c \
			 sha256.c \
			 append.c \
			 append.c \
			 hash.c \
			 init.c \
			 parse.c \
			 process_message_blocks.c \
			 store.c \
			 md5.c \
			 sha256.c \
	 		 output.c \
#	     auxiliary.c \
			 
SRC_PATH = ./src/
SRC_FILES = $(addprefix ./src/, $(FILE_NAMES))

OBJ_PATH = ./obj/
OBJ_FILES = $(addprefix $(OBJ_PATH), $(FILE_NAMES):.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(C_FLAGS) $(INC_FLAGS) $(SRC_FILES) -o $(NAME) $(LIBRARY)

clang: $(SRC_FILES)
	$(CC) $(CLANG) $(C_FLAGS) $(INC_FLAGS) $(SRC_FILES) -o $(NAME) $(LIBRARY)

clean:
	rm -rf $(OBJ_PATH)

fclean:
	rm -f $(NAME)
	rm -rf $(OBJ_PATH)

re: fclean all

