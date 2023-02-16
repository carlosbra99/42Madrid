/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:07:36 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 12:00:35 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int    main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore MY memset(): %s\n", str);
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After MY memset():  %s", str);

	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str2);
	memset(str2 + 13, '.', 8*sizeof(char));
	printf("After memset():  %s", str2);
	return (0);
}*/