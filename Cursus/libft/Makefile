# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
<<<<<<< HEAD:libft/Makefile
#    Created: 2023/01/16 13:58:11 by cbravo-a          #+#    #+#              #
#    Updated: 2023/01/24 16:28:22 by cbravo-a         ###   ########.fr        #
=======
#    Created: 2023/01/24 17:17:08 by cbravo-a          #+#    #+#              #
#    Updated: 2023/01/24 17:17:39 by cbravo-a         ###   ########.fr        #
>>>>>>> 4cb6308d1f9680561eece516b820bbfe4e3d4f50:Cursus/libft/Makefile
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
                        ft_substr.c \
                        ft_calloc.c \
                        ft_strdup.c \
                        ft_strjoin.c \
                        ft_strtrim.c \
                        ft_itoa.c \
                        ft_strmapi.c \
                        ft_memcmp.c
                        #ft_split.c \
                        #ft_striteri.c \
                        #ft_putchar_fd.c \
                        #ft_putstr_fd.c \
                        #ft_putendl_fd.c \
                        #ft_putnbr_fd.c
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