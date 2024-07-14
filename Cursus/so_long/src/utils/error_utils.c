/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:58:09 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/07/14 12:46:35 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <so_long.h>

void	ft_print_error(char *error)
{
	write(2, "Error\n", 6);
	write(2, error, ft_strlen(error));
}
