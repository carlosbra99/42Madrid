# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carlos <carlos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 14:13:15 by carlos            #+#    #+#              #
#    Updated: 2024/07/14 18:45:20 by carlos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	COLOURS	#

GREEN = \033[0:32m
COLOR_OFF = \033[0m

#	VARIABLES	#

NAME = so_long

SRC = so_long.c ft_map_parser.c ft_map_valid.c error_utils.c exit_utils.c main_utils.c file_utils.c \
				free_utils.c map_utils.c ft_map_valid_utils.c position_utils.c game_utils.c ft_render_game.c \
				ft_render_map.c ft_render_map_utils.c player_movement.c player_movement_utils.c steps_utils.c

SRC_PATH = src/*/
SRCS = $(addprefix $(SRC_PATH), $(SRC))

OBJ_PATH = obj/
OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

LIBFT_PATH = lib/libft/
LIBFT = $(LIBFT_PATH)libft.a

MLX_PATH = lib/minilibx-linux/
MLX = $(MLX_PATH)libmlx.a

INCLUDE = inc/

CC = gcc
CFLAGS =  -Wall -Wextra -Werror -I $(INCLUDE) -I ./lib/libft/include -I ./lib/minilibx-linux
LFLAGS =  -L $(MLX_PATH) -lmlx -L /usr/X11/lib -lXext -lX11 -lXrandr -lXinerama -lXcursor -lXpm -lm -lbsd
RM = rm -rf

#	RULES	#

all: $(NAME)

$(LIBFT): $(LIBFT_PATH)
	@make -C $(LIBFT_PATH)
	
$(MLX): $(MLX_PATH)
	@make -C $(MLX_PATH)
	@mkdir -p mlx
	@cp $(MLX) mlx
	@echo "$(GREEN)<+> mlx has been created! <+>$(COLOR_OFF)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(MLX) $(OBJS)
	@$(CC) $(CFLAGS) $(LFLAGS) $(OBJS) $(LIBFT) $(MLX) -o $(NAME)
	@echo "$(GREEN)<+> so_long has been created! <+>$(COLOR_OFF)"

clean:
	@make -C $(LIBFT_PATH) clean
	@make -C $(MLX_PATH) clean
	@$(RM) mlx
	@echo "$(GREEN)<-> mlx cleaned successfuly! <->$(COLOR_OFF)"
	@$(RM) $(OBJ_PATH)

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)
	@echo "$(GREEN)<-> so_long cleaned successfuly! <->$(COLOR_OFF)"

re: fclean all

norm:
	norminette lib/libft
	norminette src
	@echo "\nNorminette passed ✓ \n"

.PHONY: all clean fclean re norm