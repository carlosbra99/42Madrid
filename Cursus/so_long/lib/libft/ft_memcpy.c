/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:19:17 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/07/14 12:49:30 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*access_src;
	unsigned char	*edit_dst;

	if (!dst && !src)
		return (0);
	i = 0;
	access_src = (unsigned char *)src;
	edit_dst = (unsigned char *)dst;
	while (i < n)
	{
		edit_dst[i] = access_src[i];
		i++;
	}
	return (dst);
}
