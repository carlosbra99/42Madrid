/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:06:24 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 16:06:44 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_print_format(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count = ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count = ft_put_unsigned_int(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_put_hexadecimal_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_put_hexadecimal_upper(va_arg(args, unsigned int));
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		index;
	int		count;

	if (!format)
		return (0);
	va_start(args, format);
	index = 0;
	count = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1])
		{
			count += ft_print_format(format[index + 1], args);
			index += 2;
		}
		else
		{
			ft_putchar_fd(format[index], 1);
			count++;
			index++;
		}
	}
	va_end(args);
	return (count);
}
