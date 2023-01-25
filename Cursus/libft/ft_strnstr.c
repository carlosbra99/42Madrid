/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:08:04 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/24 18:41:40 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t i;
    char *prim;

    i = 0;
    if (!s1 && !len)
		return (0);
    prim = (char *)s1;
    if (s2[i] == '\0')
        return (prim);
    while ((s1[i] != '\0' && s2[i] != '\0') && i < len)
    {
        if (prim == s2)
        {
            if (s1[i] )
            return (prim);    
        }
        i++;
    }
    return (NULL);
}

/*int main(void)
{
    printf("MIA: %s\n", ft_strnstr("Buenas tardes", "tardes", 9));
    printf("OROGINAL: %s\n", strnstr("Buenas tardes", "tardes", 9));
    return (0);
}*/