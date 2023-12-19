/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:07:49 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/12/19 18:31:00 by cbravo-a         ###   ########.fr       */
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
int	ft_putchar(char c);
int	ft_putstr(char *str);
int ft_puthex_min(unsigned int nb);
int ft_puthex_may(unsigned int nb);
int ft_putptr(int *ptr);
int	ft_putptr_aux(unsigned long nb);

int ft_printf_type(va_list args, const char type);
int	ft_printf(const char *str, ...);

#endif