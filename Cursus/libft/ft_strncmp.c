/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:17:40 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/13 16:58:30 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

/*int main(void)
{
    printf("MIA: %d\n", ft_strncmp("Buenas tardes", "Buenos dias", 9));
    printf("OROGINAL: %d\n", strncmp("Buenas tardes", "Buenos dias", 9));
    return (0);
}*/