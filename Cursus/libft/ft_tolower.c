/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:20:17 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 11:34:32 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = (c - 'A' + 'a');
	return (c);
}

/*int main(void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('B'));
	printf("%d\n", ft_tolower('-'));
}*/