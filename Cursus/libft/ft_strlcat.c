/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:37:32 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/24 18:03:37 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	if (!dst && !size)
		return (0);
	while (dst[j] != '\0')
	{
		j++;
	}
	dst_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

/*int main(void)
{
    char    test[] = "Adios";
    char    test2[] = "Adios";

    printf("MINE: %lu\n", ft_strlcat(test, "hello, world!", 3));
    printf("ORIGINAL: %lu\n", strlcat(test2, "hello, world!", 3));
    printf("%s\n", test);
    printf("%s\n", test2);
    return (0);
}*/