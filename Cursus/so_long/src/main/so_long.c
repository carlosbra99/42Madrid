/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <cbravo-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:56:44 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/07/16 16:50:13 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <mlx.h>
#include <libft.h>
#include <stdbool.h>

int	main(int argc, char **argv)
{
	t_map	*map;
	t_game	*game;

	if (argc != 2 || !ft_valid_input(argv[1]))
		ft_how_to_use(argc);
	map = ft_map_parser(argv[1]);
	game = ft_initialize_game(map);
	ft_render_game(game);
	ft_free_game(game);
	return (0);
}
