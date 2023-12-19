/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:46:53 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 19:06:15 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_aux(unsigned long nb)
{
	int	cont;

	cont = 0;
	if (nb >= 16)
	{
		cont += ft_putptr_aux(nb / 16);
		cont += ft_putptr_aux(nb % 16);
	}
	else
	{
		if (nb < 10)
			cont += ft_putchar(nb + 48);
		else
			cont += ft_putchar(nb - 10 + 'a');
	}
	return (cont);
}

int	ft_putptr(int *ptr)
{
	int	cont;

	cont = 2;
	ft_putchar('0');
	ft_putchar('x');
	cont += ft_putptr_aux((unsigned long)ptr);
	return (cont);
}
