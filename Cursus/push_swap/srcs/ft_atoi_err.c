/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_err.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:21:09 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 09:34:17 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int whitespaces(char *str, int *ptr_i)
{
    int     count;
    int     i;
    int     j;

    i = 0;
    j = 0;
    count = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        if (str[i] == 45)
            count *= -1;
        i++;
        j++;
    }
    *ptr_i = i;
    if (j > 1)
        return (9999);
    else
        return (count);
}

int ft_atoi_err(char *str, int *err)
{
    int                     sign;
    unsigned long long int  result;
    int                     i;

    result = 0;
    sign = whitespaces(str, &i);
    if (sign != 9999)
    {
        while (str[i] && str[i] >= 48 && str[i] <=57)
        {
            result *= 10;
            result += str[i] - 48;
            i++;
        }
        if ((sign > 0 && result > INT32_MAX)
                || (sign < 0 && result > 2147483648))
        {
            *err = 0;
            return (0);
        }
        *err = 1;
        return ((int)result * sign);
    }
    *err = 0;
    return (0);
}
