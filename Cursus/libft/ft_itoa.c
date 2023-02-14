/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:18:57 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/07 11:32:26 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char    *str;
    long    nbr;
    size_t  siz;

    nbr = n;
    siz = nbr > 0 ? nbr : -nbr;
    while (n)
    {
        n /= 10;
        siz++;
    }
    if (!(str = (char *)malloc(siz + 1)))
        return (0);
    *(str + siz--) = '\0';
    while (nbr > 0)
    {
        *(str + siz--) = nbr % 10 + '0';
        nbr /= 10;    
    }
    if (siz == 0 && str[1] == '\0')
        *(str + siz) = '\0';
    else if (siz == 0 && str[1] != '\0')
        *(str + siz) = '-';
    return (str);
}