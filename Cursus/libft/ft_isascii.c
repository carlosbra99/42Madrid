/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:32:57 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/11 15:38:41 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);    
}

/*int main(void)
{
    printf("%d\n", ft_isascii('a'));
    printf("%d\n", ft_isascii('7'));
    printf("%d\n", ft_isascii(' '));
    printf("%d\n", ft_isascii('.'));
}*/