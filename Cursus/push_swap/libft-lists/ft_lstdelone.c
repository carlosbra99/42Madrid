/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:49:30 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:17:06 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
