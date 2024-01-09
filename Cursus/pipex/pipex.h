/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:06:16 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/01/09 13:59:40 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include "./libft/libft.h"

void	close_fds(int pipefds[2]);
int		ft_strichr(char *str, char c);
char	*ft_strndup(char *str, unsigned int n);
void	free_mat(char **mat);
void	error_msg(void);

char	*get_path(char *cmd, char **envp);
char	*get_env_path(char **envp);
char	*search_bin_in_path(char *cmd, char *path);

#endif