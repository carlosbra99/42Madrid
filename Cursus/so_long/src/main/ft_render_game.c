/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:55:55 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 12:45:25 by carlos           ###   ########.fr       */
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
