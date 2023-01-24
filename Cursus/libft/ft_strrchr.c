/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:59:16 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/16 19:58:47 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

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

char *ft_strrchr(const char *s, int c)
{
    char *point;
    int len;

    len = ft_strlen(s);
    point = (char *)s + len - 1;
    if (c == '\0')
    {
        point++;
        return (point);
    }   
    while (len != 0)
    {
        if (*point == c)
            return (point);
        len--;
        point--;
    }
    return (NULL);
}

/*int main(void)
{
    printf("MIA: %s\n", ft_strrchr("Buenas tardes", 101));
    printf("OROGINAL: %s\n", strrchr("Buenas tardes", 101));
    return (0);
}*/