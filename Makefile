# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 11:02:46 by eliu              #+#    #+#              #
#    Updated: 2018/11/22 17:13:45 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./ft_ssl

CC = gcc
C_FLAGS = -Wall -Wextra -Werror
INC_FLAGS = -I include

FILE_NAMES = main.c \
			 init.c \
			 parse.c \
			 store.c \
			 
SRC_PATH = ./src/
SRC_FILES = $(addprefix ./src/, $(FILE_NAMES))

OBJ_PATH = ./obj/
OBJ_FILES = $(addprefix $(OBJ_PATH), $(FILE_NAMES):.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(C_FLAGS) $(INC_FLAGS) $(SRC_FILES) -o $(NAME)
	mkdir obj
	mv *.o obj

clean:
	rm -rf $(OBJ_PATH)

fclean:
	rm -f $(NAME)
	rm -rf $(OBJ_PATH)

re: fclean all
