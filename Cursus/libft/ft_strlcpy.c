/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:52:34 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 11:40:16 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	count = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (count);
}

/*int main(void)
{
	char    test[] = " ";
	char    test2[] = " ";

	printf("MINE: %lu\n", ft_strlcpy(test, "hello, world!", 2));
	printf("ORIGINAL: %lu\n", strlcpy(test2, "hello, world!", 2));
	printf("%s\n", test);
	printf("%s\n", test2);
	return (0);
}*/