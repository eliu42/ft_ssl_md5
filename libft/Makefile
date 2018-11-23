# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:27:38 by eliu              #+#    #+#              #
#    Updated: 2017/01/19 12:49:55 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = atoi \
		bzero \
		isascii \
		isalnum \
		isalpha \
		isdigit \
		isupper \
		islower \
		isprint \
		isspace \
		toupper \
		tolower \
		memalloc \
		memchr \
		memcmp \
		memcpy \
		memccpy \
		memcpy_bwd \
		memdel \
		memmove \
		memset \
		putchar \
		putstr \
		putnbr \
		strcat \
		strncat \
		strchr \
		strrchr \
		strcmp \
		strncmp \
		strcpy \
		strncpy \
		strdel \
		strdup \
		strndup \
		strlen \
		strnlen \
		strstr \
		strnstr \
		strclr \
		memalloc \
		striter \
		striteri \
		strmap \
		strmapi \
		strequ \
		strnequ \
		strsub \
		strnew \
		putnbr_fd \
		putchar_fd \
		putstr_fd \
		putendl_fd \
		putendl \
		strjoin \
		strjoin_memdel \
		strcjoin \
		strtrim \
		itoa \
		strsplit \
		strlcat \
		lstnew \
		lstdelone \
		lstdel \
		lstadd \
		lstiter \
		lstmap \

FT_FILES = $(addprefix ft_, $(FILES))
SRC_FILES = $(addsuffix .c,$(FT_FILES))
OBJ_FILES = $(SRC_FILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
