# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 17:33:28 by cbravo-a          #+#    #+#              #
#    Updated: 2023/01/24 17:48:44 by cbravo-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MY_SOURCES = ft_isalpha.c \
						ft_isdigit.c  \
						ft_isalnum.c \
						ft_bzero.c \
						ft_memset.c \
						ft_strlen.c \
						ft_isprint.c \
						ft_isascii.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_strncmp.c \
						ft_toupper.c \
						ft_tolower.c \
						ft_strchr.c \
						ft_strlcpy.c \
						ft_strnstr.c \
						ft_atoi.c \
						ft_memchr.c \
						ft_strrchr.c \
						ft_strlcat.c \
						ft_calloc.c \
						ft_strdup.c \
						ft_memcmp.c
						
MY_OBJECTS = $(MY_SOURCES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
$(NAME): $(MY_OBJECTS)
	@ar r $(NAME) $(MY_OBJECTS)
all:    $(NAME)
clean:
		@rm -f $(MY_OBJECTS)
fclean: clean
		@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re