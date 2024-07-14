/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:26:26 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 12:47:56 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>
#include <libft.h>

int	ft_valid_input(char *str)
{
	if (!str || ft_strnstr(str + (ft_strlen(str) - 4), ".ber", 4) == 0)
		return (0);
	return (1);
}
