/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:18:24 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 13:02:17 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf_type(va_list args, const char type)
{
    int cont;

    cont = 0;
    if (type == 'c')
		cont += ft_putchar(va_arg(args, int));
	else if (type == 's')
		cont += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		cont += ft_putptr(va_arg(args, unsigned long));
	else if (type == 'd')
		cont += ft_putnbr(va_arg(args, int));
    else if (type == 'i')
        cont += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		cont += ft_putunbr(va_arg(args, unsigned int));
	else if (type == 'x')
		cont += ft_puthex(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (type == 'X')
		cont += ft_puthex(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (type == '%')
		cont += ft_putchar(type);
	return (cont);
}

int	ft_printf(const char *str, ...)
{
    va_list args;
    int     cont;

	cont = 0;
	va_start(args, str);
	while (*str)
	{
        if (*str == '%')
		{
			str++;
			cont += ft_printf_type(args, *str++);
		}
		else
			cont += ft_putchar(*str++);   
    }
    va_end(args);
    return (cont);
}