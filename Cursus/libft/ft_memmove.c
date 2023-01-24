/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:25:25 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/13 18:11:36 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t			i;
	unsigned char	*access_src;
	unsigned char	*edit_dst;

	i = 0;
	access_src = (unsigned char*)src;
	edit_dst = (unsigned char*)dst;
	while (i < n)
	{
		edit_dst[i] = access_src[i];
		i++;
	}
	return (dst);
}

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