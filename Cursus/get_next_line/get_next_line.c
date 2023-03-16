/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:38:00 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/03/16 13:49:19 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
}

char    *get_next_line(int fd)
{
    
}