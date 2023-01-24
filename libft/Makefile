# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:44:06 by cbravo-a          #+#    #+#              #
#    Updated: 2023/01/16 13:48:35 by cbravo-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME): $(SRC)
	gcc -Wextra _Werror -Wall $(OBJ) -o $(NAME)
.PHONY: all clean fclean re

OBJ = $(patsubst %.c,%.o,$(SRC))

%.o: %.c
    $(CC) $(CFLAGS) -c $^ -o $@

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpa.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_srtdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c 

OBJ = $(SRC:%.c=%.o)

NAME = name

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = 

RM = /bin/rm -f
RMDIR = /bin/rmdir

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
    $(CC) $(LDFLAGS) $(OBJ) -o $(NAME)

clean:
    $(RM) $(wildcard $(OBJ)) # I also modified the clean rule

fclean: clean
    $(RM) $(NAME)

re: fclean all