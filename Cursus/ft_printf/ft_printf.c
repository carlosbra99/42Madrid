/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:18:24 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 18:49:59 by cbravo-a         ###   ########.fr       */
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
		cont += ft_putptr(va_arg(args, int *));
	else if (type == 'd')
		cont += ft_putnbr(va_arg(args, int));
    else if (type == 'i')
        cont += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		cont += ft_putunbr(va_arg(args, unsigned int));
	else if (type == 'x')
		cont += ft_puthex_min(va_arg(args, unsigned int));
	else if (type == 'X')
		cont += ft_puthex_may(va_arg(args, unsigned int));
	else if (type == '%')
		cont += ft_putchar(type);
	return (cont);
}

int	ft_printf(const char *str, ...)
{
    va_list args;
    int     cont;
	int		i;

	cont = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
        if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				cont += write(1, "%%", 1);
			else
				cont += ft_printf_type(args, str[i]);
		}
		else
			cont += write(1, &str[i], 1);
		i++;   
    }
    va_end(args);
    return (cont);
}