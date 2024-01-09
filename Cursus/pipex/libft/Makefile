# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 17:33:28 by cbravo-a          #+#    #+#              #
#    Updated: 2023/02/14 14:03:03 by cbravo-a         ###   ########.fr        #
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
						ft_memcmp.c \
						ft_putchar_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c \
						ft_putstr_fd.c \
						ft_substr.c \
						ft_strjoin.c \
						ft_strtrim.c \
						ft_itoa.c \
						ft_strmapi.c \
						ft_striteri.c \
						ft_split.c

MY_BONUS = ft_lstnew_bonus.c \
						ft_lstadd_front_bonus.c \
						ft_lstsize_bonus.c \
						ft_lstlast_bonus.c \
						ft_lstadd_back_bonus.c \
						ft_lstdelone_bonus.c \
						ft_lstclear_bonus.c \
						ft_lstiter_bonus.c \
						ft_lstmap_bonus.c 
						
MY_OBJECTS = $(MY_SOURCES:.c=.o)
BONUS_OBJECTS = $(MY_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(MY_OBJECTS)
	@ar r $(NAME) $(MY_OBJECTS)

all:    $(NAME)

clean:
		@rm -f $(MY_OBJECTS) $(BONUS_OBJECTS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJECTS)
	@ar rcs $(NAME) $(BONUS_OBJECTS)
	@echo "Bonus has been compiled"

.PHONY: all clean fclean re bonus