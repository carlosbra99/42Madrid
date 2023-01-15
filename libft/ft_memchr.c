/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:02:09 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/13 18:05:48 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

int    main(void)
{
    char    dst[20] = "test";
    char    dst2[20] = "test";
    
    printf("MAIN: %s\n", ft_memchr(dst, 's', 5));
    printf("ORIGINAL: %s\n", memchr(dst2, 's', 5));
    return (0);
}