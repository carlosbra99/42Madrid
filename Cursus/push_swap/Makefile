NAME			= push_swap

SRC_DIR			= srcs/
INC_DIR			= ./include/
OBJ_DIR			= obj/

SRC				= push_swap.c check_argv.c check_stacks.c get_num_stacks.c \
					operations_1.c operations_2.c push_swap_utils.c \
					push_swap_utils_2.c check_argv_one.c split_argv.c check_argv_one_utils.c

SRCS			= $(addprefix $(SRC_DIR), $(SRC))

OBJ				= $(SRC:.c=.o)
OBJS			= $(addprefix $(OBJ_DIR), $(OBJ))

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean