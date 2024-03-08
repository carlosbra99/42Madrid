/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:18:57 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 12:12:51 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_itoa(int n, int count, char *ret)
{
	char	a;

	ret[count] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			count--;
			ret[count] = '8';
			n = -214748364;
		}
		n *= -1;
		ret[0] = '-';
	}
	if (n == 0)
		ret[0] = '0';
	while (n > 0)
	{
		a = n % 10 + '0';
		ret[count - 1] = a;
		n /= 10;
		count--;
	}
}

static int	ft_check_count_itoa(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*ret;

	count = ft_check_count_itoa(n);
	ret = (char *)malloc(sizeof(char) * (count + 1));
	if (ret == 0)
		return (NULL);
	ft_putnbr_itoa(n, count, ret);
	return (ret);
}
