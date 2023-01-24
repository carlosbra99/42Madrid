/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:19:17 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/24 16:23:00 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
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

/*int    main(void)
{
    char    *dst = "HOLA";
    char    *dst2 = "HOLA";
    char    *src = "TEST";
    char    *src2 = "TEST";
    
    ft_memcpy(dst, src, 0);
    printf("MAIN: %s\n", dst);
    memcpy(dst2, src2, 0);
    printf("ORIGINAL: %s\n", dst2);
    return (0);
}*/