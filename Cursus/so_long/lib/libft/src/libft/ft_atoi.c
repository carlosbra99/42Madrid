/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:41 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/14 13:39:08 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	contador;
	int	resul;
	int	sign;

	resul = 0;
	contador = 0;
	sign = 1;
	while (str[contador] == 32 || (str[contador] >= 9 && str[contador] <= 13))
		contador++;
	if (str[contador] == 45)
	{
		sign = -1;
		contador++;
	}
	else if (str[contador] == 43)
		contador++;
	while (str[contador] && (str[contador] >= '0' && str[contador] <= '9'))
	{
		resul *= 10;
		resul += str[contador] - '0';
		contador++;
	}
	return (resul * sign);
}
