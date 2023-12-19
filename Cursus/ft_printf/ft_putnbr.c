/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:07:28 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 13:36:38 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	num;
	int 			cont;

	num = nb;
	cont = 0;
	if (nb < 0)
	{
		num *= -1;
		cont += ft_putchar('-');
	}
	if (nb > 9)
	{
		cont += ft_putnbr(num / 10);
		cont += ft_putchar((num % 10) + '0');
	}
	else
		cont += ft_putchar(num + '0');
	return (cont);
}

int	ft_putunbr(unsigned int nb)
{
	unsigned int	num;
	int				cont;

	num = nb;
	cont = 0;
	if (nb > 9)
	{
		cont += ft_putunbr(num / 10);
		cont += ft_putchar((num % 10) + '0');
	}
	else
		cont += ft_putchar(num + '0');
	return (cont);
}