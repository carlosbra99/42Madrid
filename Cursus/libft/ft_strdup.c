/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:26:42 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/14 11:54:00 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	s_len;
	int	i;
	char	*str_copy;

	s_len = ft_strlen(s);
	str_copy = malloc(sizeof(*str_copy) * (s_len + 1));
	if (str_copy)
	{
		i = 0;
		while (s[i] != '\0')
		{
			str_copy[i] = s[i];
			i++;
		}
		str_copy[i] = '\0';
	}
	return (str_copy);
}

/*int    main(void)
{
    char    *str = malloc(5);
    char    *cpy;
    char    *cpy2;
    if (!str)
        return (0);
    str = "test";
    cpy = ft_strdup(str);
    cpy2 = strdup(str);
    printf("%s\n", cpy);
    printf("%s\n", cpy2);
    free(cpy);
    free(cpy2);
    free(str);
    return (0);
}*/