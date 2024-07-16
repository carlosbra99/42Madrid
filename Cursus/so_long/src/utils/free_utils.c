/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <cbravo-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:25:59 by carlos            #+#    #+#             */
/*   Updated: 2024/07/16 19:19:39 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>
#include <stdbool.h>

void	ft_free_array(char **arr)
{
	int	index;

	index = 0;
	if (!arr)
		return ;
	while (arr[index])
	{
		free(arr[index]);
		index++;
	}
	free(arr[index]);
	free(arr);
}

void	ft_free_map(t_map *map)
{
	if (!map)
		return ;
	if (map->map)
		ft_free_array(map->map);
	if (map->map_cpy)
		ft_free_array(map->map_cpy);
	if (map->player)
		free(map->player);
	if (map->exit)
		free(map->exit);
	free(map);
}

void	ft_free_game(t_game *game)
{
	if (!game)
		return ;
	ft_free_map(game->map);
	free(game);
}
