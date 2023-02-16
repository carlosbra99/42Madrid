/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:08:04 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 11:41:59 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*haystack_prim;
	char	*needle_prim;

	if (!ft_strlen(needle))
		return ((char *) haystack);
	if (!ft_strlen(haystack) || len < ft_strlen(needle))
		return (0);
	i = len - ft_strlen(needle) + 1;
	while (i-- && *haystack)
	{
		haystack_prim = (char *)haystack;
		needle_prim = (char *)needle;
		while (*needle_prim && *needle_prim == *haystack_prim)
		{
			haystack_prim++;
			needle_prim++;
		}
		if (!*needle_prim)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

/*int main(void)
{
	printf("MIA: %s\n", ft_strnstr("Buenas tardes", "tardes", 9));
	printf("OROGINAL: %s\n", strnstr("Buenas tardes", "tardes", 9));
	return (0);
}*/