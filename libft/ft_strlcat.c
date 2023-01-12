/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:37:32 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/12 12:52:08 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > size)
	{
		dstlen = size;
	}
	if (dstlen == size || size == 0)
	{
		return (dstlen + srclen);
	}
	if (srclen < size - dstlen)
	{
	
	}
	else
	{
		
	}
	return (dstlen + srclen);
}*/

int main(void)
{
    char    test[] = " ";
    char    test2[] = "Adios";

    //printf("MINE: %lu\n", ft_strlcat(test, "hello, world!", 2));
    printf("ORIGINAL: %lu\n", strlcat(test2, "hello, world!", 3));
    printf("%s\n", test);
    printf("%s\n", test2);
    return (0);
}