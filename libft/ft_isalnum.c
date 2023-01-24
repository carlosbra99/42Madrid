/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:22:38 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/11 15:32:21 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 48 && c <= 57))
        return (1);
    return (0);
}

/*int main(void)
{
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('7'));
    printf("%d\n", ft_isalnum('5'));
    printf("%d\n", ft_isalnum('.'));
}*/