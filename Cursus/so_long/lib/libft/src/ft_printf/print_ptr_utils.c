/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:08:44 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 16:09:01 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_putptr_address(uintptr_t number)
{
	int		count;
	int		index;
	char	hexadecimal[100];

	count = 0;
	index = 0;
	count += ft_putstr("0x");
	while (number != 0)
	{
		hexadecimal[index] = "0123456789abcdef"[number % 16];
		number /= 16;
		index++;
		count++;
	}
	index--;
	while (index >= 0)
	{
		ft_putchar_fd(hexadecimal[index], 1);
		index--;
	}
	return (count);
}

int	ft_putptr(void *pointer)
{
	if (!pointer)
		return (ft_putstr("0x0"));
	return (ft_putptr_address((uintptr_t)(void *)pointer));
}
