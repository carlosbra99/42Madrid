/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:08:04 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/12 17:13:02 by cbravo-a         ###   ########.fr       */
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

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t i;
    char *prim;

    i = 0;
    prim = (char *)s1;
    if (s2[i] == '\0')
        return (prim);
    while ((s1[i] != '\0' && s2[i] != '\0') && i < len)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] )
            return (prim);    
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    printf("MIA: %s\n", ft_strnstr("Buenas tardes", "tardes", 9));
    printf("OROGINAL: %s\n", strnstr("Buenas tardes", "tardes", 9));
    return (0);
}