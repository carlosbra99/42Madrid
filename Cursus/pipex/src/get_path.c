/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:17:53 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/01/09 11:57:32 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

char	*get_path(char *cmd, char **envp)
{
	char	*path;
	char	*bin;

	if (access(cmd, X_OK) == 0)
		return (cmd);
	path = get_env_path(envp);
	if (!path)
		return (NULL);
	bin = search_bin_in_path(cmd, path);
	return (bin);
}

char	*get_env_path(char **envp)
{
	int		i;

	i = 0;
	while (envp[i])
	{	
		if (ft_strncmp("PATH=", envp[i], 5) == 0)
			return (envp[i] + 5);
		i++;
	}
	return (NULL);
}

char	*search_bin_in_path(char *cmd, char *path)
{
	char	*dir;
	char	*bin;

	while (*path)
	{
		dir = ft_strndup(path, ft_strichr(path, ':'));
		dir = ft_strjoin(dir, "/");
		bin = ft_strjoin(dir, cmd);
		free(dir);
		if (access(bin, F_OK) == 0)
			return (bin);
		free(bin);
		path = ft_strchr(path, ':');
		if (!path)
			break ;
		path++;
	}
	return (NULL);
}