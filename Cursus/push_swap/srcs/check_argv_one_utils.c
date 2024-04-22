/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:49:46 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/04/18 12:07:37 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_one_argv_loop(char **spl, int i, int j)
{
	while (spl[i][j])
	{
		if (!ft_isdigit((int)(spl[i][j])) && (spl[i][j] != '+'
			&& spl[i][j] != '-'))
			error_exit();
		if ((spl[i][j] == '+' || spl[i][j] == '-')
			&& (!ft_isdigit((int)(spl[i][j + 1]))))
			error_exit();
		if (ft_isdigit(spl[i][j]) && !ft_isdigit(spl[i][j + 1])
			&& spl[i][j + 1])
			error_exit();
		j++;
	}
}
