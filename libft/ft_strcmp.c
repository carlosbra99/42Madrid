/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:17:40 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/01/12 14:23:21 by cbravo-a         ###   ########.fr       */
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

/*int ft_strcmp(const char *s1, const char *s2)
{
    int len1;
    int len2;
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    
    
}*/

int main(void)
{
    //printf("MIA: %s\n", ft_strcmp("Buenas tardes", 101));
    printf("OROGINAL: %d\n", strcmp("Buenas tardes", "Buenas nochesesesesese"));
    return (0);
}