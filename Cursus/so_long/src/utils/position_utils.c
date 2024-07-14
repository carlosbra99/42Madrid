/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:27:13 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 12:48:15 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>
#include <stdlib.h>

t_position	*ft_initialize_position(t_map *map, int search)
{
	int			y;	
	int			x;
	t_position	*pos;

	pos = (t_position *)malloc(sizeof(t_position));
	if (!pos)
		ft_exit_program(ERROR_MALLOC, map, NO_GAME);
	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->map[y][x] == search)
			{
				pos->y = y;
				pos->x = x;
				return (pos);
			}
			x++;
		}
		y++;
	}
	return (pos);
}

t_position	*ft_initialize_defined_pos(t_game *game, int y, int x)
{
	t_position	*pos;

	pos = (t_position *)malloc(sizeof(t_position));
	if (!pos)
		ft_exit_program(ERROR_MALLOC, NO_MAP, game);
	pos->y = y;
	pos->x = x;
	return (pos);
}
