/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:07:09 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 16:07:19 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_count_digits(unsigned int number)
{
	int	count;

	if (!number)
		return (0);
	count = 0;
	if (number == 0)
		count++;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}
