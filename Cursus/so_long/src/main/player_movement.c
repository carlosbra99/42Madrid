/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <cbravo-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:57:31 by carlos            #+#    #+#             */
/*   Updated: 2024/07/16 19:07:32 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>
#include <mlx.h>
#include <stdbool.h>

static void	ft_move_up(t_game *game, t_position *player, int w, int h)
{
	static int	count;
	void		*img;

	if (game->map->map[player->y - 1][player->x] != WALL
		&& game->map->map[player->y - 1][player->x] != EXIT)
	{
		if (!count)
			count = 2;
		if (count % 2 == 0)
			img = mlx_xpm_file_to_image(game->mlx, C_WALK_UP, &w, &h);
		else
			img = mlx_xpm_file_to_image(game->mlx, C_IDLE_UP, &w, &h);
		if (!img)
			ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
		ft_player_move_up_2(game, player, img);
		if (ft_count_items(game->map) == 0)
			ft_render_exit(game);
		game->steps++;
		ft_steps_to_window(game);
		ft_printf("Steps: %d\n", game->steps);
		count++;
	}
	else if (game->map->map[player->y - 1][player->x] == EXIT
		&& game->exit_open == true)
		ft_game_won(game);
}

static void	ft_move_down(t_game *game, t_position *player, int w, int h)
{
	static int	count;
	void		*img;

	if (game->map->map[player->y + 1][player->x] != WALL
		&& game->map->map[player->y + 1][player->x] != EXIT)
	{
		if (!count)
			count = 2;
		if (count % 2 == 0)
			img = mlx_xpm_file_to_image(game->mlx, C_WALK_DOWN, &w, &h);
		else
			img = mlx_xpm_file_to_image(game->mlx, C_IDLE_DOWN, &w, &h);
		if (!img)
			ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
		ft_player_move_down_2(game, player, img);
		if (ft_count_items(game->map) == 0)
			ft_render_exit(game);
		game->steps++;
		ft_steps_to_window(game);
		ft_printf("Steps: %d\n", game->steps);
		count++;
	}
	else if (game->map->map[player->y + 1][player->x] == EXIT
		&& game->exit_open == true)
		ft_game_won(game);
}

static void	ft_move_left(t_game *game, t_position *player, int w, int h)
{
	static int	count;
	void		*img;

	if (game->map->map[player->y][player->x - 1] != WALL
		&& game->map->map[player->y][player->x - 1] != EXIT)
	{
		if (!count)
			count = 2;
		if (count % 2 == 0)
			img = mlx_xpm_file_to_image(game->mlx, C_WALK_LEFT, &w, &h);
		else
			img = mlx_xpm_file_to_image(game->mlx, C_IDLE_LEFT, &w, &h);
		if (!img)
			ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
		ft_player_move_left_2(game, player, img);
		if (ft_count_items(game->map) == 0)
			ft_render_exit(game);
		game->steps++;
		ft_steps_to_window(game);
		ft_printf("Steps: %d\n", game->steps);
		count++;
	}
	else if (game->map->map[player->y][player->x - 1] == EXIT
		&& game->exit_open == true)
		ft_game_won(game);
}

static void	ft_move_right(t_game *game, t_position *player, int w, int h)
{
	static int	count;
	void		*img;

	if (game->map->map[player->y][player->x + 1] != WALL
		&& game->map->map[player->y][player->x + 1] != EXIT)
	{
		if (!count)
			count = 2;
		if (count % 2 == 0)
			img = mlx_xpm_file_to_image(game->mlx, C_WALK_RIGHT, &w, &h);
		else
			img = mlx_xpm_file_to_image(game->mlx, C_IDLE_RIGHT, &w, &h);
		if (!img)
			ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
		ft_player_move_right_2(game, player, img);
		if (ft_count_items(game->map) == 0)
			ft_render_exit(game);
		game->steps++;
		ft_steps_to_window(game);
		ft_printf("Steps: %d\n", game->steps);
		count++;
	}
	else if (game->map->map[player->y][player->x + 1] == EXIT
		&& game->exit_open == true)
		ft_game_won(game);
}

int	ft_move_player(int keycode, t_game *game)
{
	if (keycode == ESC_KEY)
		ft_close_game(game);
	else if (keycode == W_KEY)
		ft_move_up(game, game->map->player, 0, 0);
	else if (keycode == S_KEY)
		ft_move_down(game, game->map->player, 0, 0);
	else if (keycode == A_KEY)
		ft_move_left(game, game->map->player, 0, 0);
	else if (keycode == D_KEY)
		ft_move_right(game, game->map->player, 0, 0);
	return (keycode);
}
