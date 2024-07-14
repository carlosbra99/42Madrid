/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:53:36 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 12:45:17 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>

t_map	*ft_map_parser(char *filename)
{
	t_map	*map;

	map = NULL;
	map = ft_initialize_map(map, filename);
	if (!map)
		ft_exit_program(INVALID_MAP, NO_MAP, NO_GAME);
	ft_map_valid(map);
	return (map);
}
