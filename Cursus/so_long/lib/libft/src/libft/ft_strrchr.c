/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:59:16 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/22 11:59:35 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*point;
	int		len;

	len = 0;
	point = (char *)s;
	while (point[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (point[len] == (char)c)
			return (&point[len]);
		len--;
	}
	return (0);
}
