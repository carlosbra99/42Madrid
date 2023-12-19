RM = rm -f
AR = ar -crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
MY_SOURCES = ft_printf.c \
				ft_putnbr.c \
				ft_putptr.c \
				ft_putstr.c \
				ft_puthex.c


MY_OBJECTS = $(MY_SOURCES:.c=.o)
INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(MY_OBJECTS) $(INCLUDE)
	$(AR) $(NAME) $(MY_OBJECTS) $(INCLUDE)

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re