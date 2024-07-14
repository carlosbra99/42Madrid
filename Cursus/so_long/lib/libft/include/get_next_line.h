/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:03:59 by carlos            #+#    #+#             */
/*   Updated: 2024/07/14 16:04:09 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

void				*ft_reallocstr(char	*str, ssize_t	nbytes);
void				*ft_freeptr(void	*ptr);
char				*get_next_line(int fd);
char				*ft_strcpy(char *dst, char *src, char limit);
size_t				ft_strchr(const char *s, int c);
size_t				ft_linelen(const char *line, char limit);

#endif