/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:16:02 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/16 14:42:23 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void*))
{
	t_list	*conc;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		conc = (*lst)->next;
		ft_lstdelone_bonus(*lst, del);
		*lst = conc;
	}
}
