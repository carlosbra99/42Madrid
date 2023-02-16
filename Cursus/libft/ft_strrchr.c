/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:59:16 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 13:11:34 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*point;
	int		len;

	/*len = ft_strlen(s);
	point = (char *)s + len - 1;
	if (c == '\0')
	{
		point++;
		return (point);
	}
	while (len >= 0)
	{
		if (*point == c)
			return (point);
		len--;
		point--;
	}
	return (NULL);*/
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

/*int main(void)
{
	printf("MIA: %s\n", ft_strrchr("Buenas tardes", 101));
	printf("OROGINAL: %s\n", strrchr("Buenas tardes", 101));
	return (0);
}*/