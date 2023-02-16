/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:39:18 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 11:54:21 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('7'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('.'));
}*/