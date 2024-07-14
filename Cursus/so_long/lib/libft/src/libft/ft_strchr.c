/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:57:46 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/22 12:00:12 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

char	*ft_strchr(const char *s, int c)
{
	char	*point;
	int		i;

	point = (char *)s;
	i = 0;
	while (point[i] != (char)c)
	{
		if (point[i] == '\0')
			return (0);
		i++;
	}
	return (&point[i]);
}
