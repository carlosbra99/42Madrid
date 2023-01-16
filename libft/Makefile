# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:58:11 by cbravo-a          #+#    #+#              #
#    Updated: 2023/01/16 15:41:32 by cbravo-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = ./lbft/
SRC_NAME = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c

OBJ_NAME	=	$(SRC_NAME:.c=.o)
SRC			=	$(addprefix $(SRC_PATH), $(SRC_NAME))
HEADER		=	./includes/
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a

all:	$(NAME)

$(NAME):
	@tput setaf 2
	gcc -c $(CFLAGS) $(SRC) -I$(HEADER)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)
	@tput sgr0

clean:
	@tput setaf 1
	rm -rf $(OBJ_NAME)
	@tput sgr0

fclean:	clean
	@tput setaf 1
	rm -f $(NAME)
	@tput sgr0

re: fclean all