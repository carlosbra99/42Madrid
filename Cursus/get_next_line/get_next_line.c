/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:38:00 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/09/08 13:53:12 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_read_line(char *str)
{
    int i;
    char    *line;
    
    if (!str || !str[0])
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    if (str[i] == '\n')
        i++;
    line = (char *)malloc(1+ i * sizeof(char));
    if (!line)
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        line[i] = str[i];
        i++;
    }
    if (str[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return (line);
}

char    *ft_move_start(char *str)
{
    char	*new_buff;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	i += (str[i] == '\n');
	new_buff = (char *)malloc(1 + ft_strlen(str) - i);
	if (!new_buff)
		return (NULL);
	j = 0;
	while (str[i + j])
	{
		new_buff[j] = str[i + j];
		j++;
	}
	new_buff[j] = '\0';
	free(str);
	return (new_buff);
}

char    *get_next_line(int fd)
{
    char		*tmp;
	int			fd_read;
	static char	*start_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	fd_read = 1;
	tmp = (char *)malloc(1 + BUFFER_SIZE * sizeof(char));
	if (!tmp)
		return (NULL);
	while (!(ft_strchr(start_str, '\n')) && fd_read != 0)
	{
		fd_read = read(fd, tmp, BUFFER_SIZE);
		if (fd_read == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[fd_read] = '\0';
		start_str = ft_strjoin(start_str, tmp);
	}
	free(tmp);
	tmp = ft_read_line(start_str);
	start_str = ft_move_start(start_str);
	return (tmp);
}