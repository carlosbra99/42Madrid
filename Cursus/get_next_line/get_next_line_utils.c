/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:09:03 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/03/01 18:21:06 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*point;
	int		i;

	point = (char *)s;
	i = 0;
	while (point[i] != (char)c)
	{
		if (point[i] == '\0')
			return (0);
		i++;
	}
	return (&point[i]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (i + 1));
	if (!strjoin)
		return (0);
	ft_strlcpy(strjoin, s1, i + 1);
	ft_strlcat(strjoin, s2, i + 1);
	return (strjoin);
}
