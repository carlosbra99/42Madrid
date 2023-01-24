/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:25:25 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/24 17:57:12 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    int i;

	if (dst > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}

/*int    main(void)
{
    char    dst[20];
    char    dst2[20];
    char    src[] = "TEST";
    char    src2[] = "TEST";
    
    ft_memmove(dst, src, 10);
    printf("MAIN: %s\n", dst);
    memmove(dst2, src2, 10);
    printf("ORIGINAL: %s\n", dst2);
    return (0);
}*/