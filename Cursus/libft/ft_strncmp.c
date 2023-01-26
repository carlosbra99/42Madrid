/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:17:40 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/26 14:28:58 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (n == 0)
        return(0);
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0' && i < (n - 1))
    {
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
    printf("MIA: %d\n", ft_strncmp("Buenas tardes", "Buenos dias", 9));
    printf("OROGINAL: %d\n", strncmp("Buenas tardes", "Buenos dias", 9));
    return (0);
}*/