/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:56:42 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 12:45:36 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>
#include <mlx.h>
#include <stdbool.h>

void	ft_render_floor(t_game *game, t_position *pos)
{
	void	*img;
	int		w;
	int		h;

	img = mlx_xpm_file_to_image(game->mlx, "./textures/floor.xpm", &w, &h);
	if (!img)
		ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
	if (pos)
	{
		mlx_put_image_to_window(game->mlx, game->window, img,
			pos->x * 16, pos->y * 16);
		return ;
	}
	ft_render_floor_2(game, img, 0, 0);
}

static void	ft_render_walls(t_game *game)
{
	void	*img;
	int		w;
	int		h;
	int		y;
	int		x;

	img = mlx_xpm_file_to_image(game->mlx, "./textures/wall.xpm", &w, &h);
	if (!img)
		ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
	y = 0;
	while (y < game->map->height)
	{
		x = 0;
		while (x < game->map->width)
		{
			if (game->map->map[y][x] == WALL || game->map->map[y][x] == EXIT)
				mlx_put_image_to_window(game->mlx, game->window,
					img, x * 16, y * 16);
			x++;
		}
		y++;
	}
}

static void	ft_render_items(t_game *game)
{
	void	*img;
	int		w;
	int		h;
	int		y;
	int		x;

	img = mlx_xpm_file_to_image(game->mlx, "./textures/chest.xpm", &w, &h);
	if (!img)
		ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
	y = 0;
	while (y < game->map->height)
	{
		x = 0;
		while (x < game->map->width)
		{
			if (game->map->map[y][x] == ITEM)
				mlx_put_image_to_window(game->mlx, game->window,
					img, x * 16, y * 16);
			x++;
		}
		y++;
	}
}

void	ft_render_exit(t_game *game)
{
	void	*img;
	int		w;
	int		h;
	int		y;
	int		x;

	img = mlx_xpm_file_to_image(game->mlx, "./textures/exit.xpm", &w, &h);
	if (!img)
		ft_exit_program(ERROR_IMG_READING, NO_MAP, game);
	y = 0;
	while (y < game->map->height)
	{
		x = 0;
		while (x < game->map->width)
		{
			if (game->map->map[y][x] == EXIT)
				mlx_put_image_to_window(game->mlx, game->window,
					img, x * 16, y * 16);
			x++;
		}
		y++;
	}
	game->exit_open = true;
}

void	ft_render_map(t_game *game)
{
	ft_render_floor(game, NULL);
	ft_render_walls(game);
	ft_render_items(game);
	ft_render_player(game);
}
