/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:57:46 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/12 13:58:35 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

char *ft_strchr(const char *s, int c)
{
    char *point;

    point = (char *)s;
    while (*point)
    {
        if (*point == c)
            return (point);
        point++;
    }
    if (*point == '\0' && c == '\0')
        return (point);
    return (NULL);
}

/*int main(void)
{
    printf("MIA: %s\n", ft_strchr("Buenas tardes", 116));
    printf("OROGINAL: %s\n", ft_strchr("Buenas tardes", 116));
    return (0);
}*/