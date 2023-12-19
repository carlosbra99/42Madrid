/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:07:28 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 11:53:28 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648 || nb == INT_MIN)
	{
		i += write(1, "-2", 2);
		i += ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		i += write(1, "-", 1);
		nb = -nb;
		i += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	else
	{
		i += ft_putchar(nb + 48);
	}
	return (i);
}

int	ft_putunbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		i += ft_putunbr(nb / 10);
		i += ft_putunbr(nb % 10);
	}
	else
		i += ft_putchar(nb + 48);
	return (i);
}