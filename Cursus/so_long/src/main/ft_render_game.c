/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <cbravo-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:55:55 by carlos            #+#    #+#             */
/*   Updated: 2024/07/16 19:20:47 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>
#include <mlx.h>
#include <stdbool.h>

void	ft_render_game(t_game *game)
{
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, game->win_width,
			game->win_height, "so_long");
	ft_render_map(game);
	mlx_key_hook(game->window, ft_move_player, game);
	mlx_hook(game->window, ON_DESTROY, 0, ft_close_game, game);
	mlx_loop(game->mlx);
}
