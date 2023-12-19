/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:08:38 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 19:05:19 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_min(unsigned int nb)
{
	int	cont;

	cont = 0;
	if (nb >= 16)
	{
		cont += ft_puthex_min(nb / 16);
		cont += ft_puthex_min(nb % 16);
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

int	ft_puthex_may(unsigned int nb)
{
	int	cont;

	cont = 0;
	if (nb >= 16)
	{
		cont += ft_puthex_may(nb / 16);
		cont += ft_puthex_may(nb % 16);
	}
	else
	{
		if (nb < 10)
			cont += ft_putchar(nb + 48);
		else
			cont += ft_putchar(nb - 10 + 'A');
	}
	return (cont);
}
