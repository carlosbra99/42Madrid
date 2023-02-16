/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:57:46 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 13:06:40 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

char	*ft_strchr(const char *s, int c)
{
	char	*point;
	int i;

	point = (char *)s;
	i = 0;
	/*while (*point)
	{
		if (*point == c)
			return (point);
		point++;
	}
	if (*point == '\0' && c == '\0')
		return (point);
	return (NULL);*/
	while (point[i] != (char)c)
	{
		if (point[i] == '\0')
			return (0);
		i++;
	}
	return (&point[i]);
}

/*int main(void)
{
	printf("MIA: %s\n", ft_strchr("Buenas tardes", 116));
	printf("OROGINAL: %s\n", ft_strchr("Buenas tardes", 116));
	return (0);
}*/