/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:52:34 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/12 12:46:25 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
//#include <libft.h>

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

size_t    ft_strlcpy(char *dst, const char *src, size_t siz)
{
    size_t i;

    i = 0;
    while ((src[i] != '\0') && (i + 1) < siz)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main(void)
{
    char    test[] = " ";
    char    test2[] = " ";

    printf("MINE: %lu\n", ft_strlcpy(test, "hello, world!", 2));
    printf("ORIGINAL: %lu\n", strlcpy(test2, "hello, world!", 2));
    printf("%s\n", test);
    printf("%s\n", test2);
    return (0);
}