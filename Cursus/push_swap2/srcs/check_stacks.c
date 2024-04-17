/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:50:41 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/04/17 14:01:46 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	check_end_sort_a(long int ***stack)
{
	int	i;

	i = -1;
	while (stack[0][0][++i] <= INT_MAX)
	{
		if (stack[0][0][i] > stack[0][0][i + 1])
			return (false);
	}
	return (true);
}

bool	check_end_group(long int ***stack, int group_len)
{
	int	i;

	i = -1;
	while (stack[0][0][++i] <= INT_MAX)
	{
		if (stack[0][0][i] <= group_len)
			return (false);
	}
	return (true);
}

bool	check_num_push(long int ***stack, int num)
{
	int	i;

	i = -1;
	while (stack[0][0][++i] <= INT_MAX)
	{
		if (stack[0][0][i] == num)
			return (false);
	}
	return (true);
}