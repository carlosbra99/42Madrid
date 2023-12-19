/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:07:28 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 18:13:36 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int 			cont;

	cont = 0;
	if (nb == -2147483648 || nb == INT_MIN)
	{
		cont += write(1, "-2", 2);
		cont += ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		cont += write(1, '-', 1);
		nb = -nb;
		cont += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		cont += ft_putnbr(nb / 10);
		cont += ft_putnbr(nb % 10);
	}
	else
		cont += ft_putchar(nb + '0');
	return (cont);
}

int	ft_putunbr(unsigned int nb)
{
	int				cont;

	cont = 0;
	if (nb > 9)
	{
		cont += ft_putunbr(nb / 10);
		cont += ft_putchar(nb % 10);
	}
	else
		cont += ft_putchar(nb + '0');
	return (cont);
}