/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:07:49 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 13:06:14 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int ft_puthex(unsigned long nb, char *base);
int ft_putptr(unsigned long nb);

int ft_printf_type(va_list args, const char type);
int	ft_printf(const char *str, ...);

#endif