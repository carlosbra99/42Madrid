/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:25:25 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 14:46:50 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
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
