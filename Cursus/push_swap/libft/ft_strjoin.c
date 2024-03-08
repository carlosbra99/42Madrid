/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:13:29 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 11:49:53 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
