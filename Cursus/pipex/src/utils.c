/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:13:35 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/12 16:33:39 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	close_fds(int pipefds[2])
{
	close(pipefds[0]);
	close(pipefds[1]);
}

int	ft_strichr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (i);
	return (-1);
}

char	*ft_strndup(char *str, unsigned int n)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	s2 = malloc(sizeof(char) * (n + 1));
	while (i < n)
		s2[i++] = *str++;
	s2[n] = 0;
	return (s2);
}

void	free_mat(char **mat)
{
	int	i;

	i = -1;
	while (mat[++i])
		free(mat[i]);
	free(mat);
}

void	error_msg(void)
{
	perror("Error");
	exit(1);
}
