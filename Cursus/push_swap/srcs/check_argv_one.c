/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:49:46 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/04/18 12:07:37 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_argv_size(const char *s)
{
	size_t	i;
	int		size;

	i = -1;
	size = 1;
	while (s[++i])
	{
		if (s[i] == ' ')
			++size;
	}
	return (size);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		str = (char *) malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	if (len > len_s)
		str = (char *) malloc(sizeof(char) * (len_s + 1));
	else
		str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}

long int	*check_duplicate_order_one(int argc, char **argv)
{
	int			i;
	int			j;
	long int	*stack;
	char		**split_argv;

	argc = ft_argv_size(argv[1]);
	stack = (long int *)ft_calloc(sizeof(long int), argc + 1);
	if (!stack)
		error_exit();
	stack[argc] = (long int) INT_MAX + 2;
	split_argv = ft_split(argv[1], ' ');
	i = 0;
	while (split_argv[i])
	{
		stack[i] = ft_atoi(split_argv[i]);
		j = 0;
		while (j < i - 1)
		{
			if (stack[j++] == stack[i - 1])
				error_exit();
		}
		++i;
	}
	check_arg_order(argc, &stack);
	return (stack);
}

long int	*check_one_argv(int argc, char **argv)
{
	long int	*stack;
	int			i;
	int			j;
	char		**spl;

	i = 0;
	j = 0;
	spl = ft_split(argv[1], ' ');
	if (!spl[0])
		error_exit();
	while (spl[i])
	{
		check_one_argv_loop(spl, i, j);
		free (spl[i]);
		j = 0;
		i++;
	}
	free (spl);
	stack = check_duplicate_order_one(argc, argv);
	return (stack);
}
