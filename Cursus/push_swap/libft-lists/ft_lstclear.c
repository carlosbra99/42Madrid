/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:16:02 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:17:03 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*ptr;
	t_list	*temp;

	if (lst)
	{
		temp = *lst;
		while (temp != NULL)
		{
			ptr = temp->next;
			ft_lstdelone(temp, del);
			temp = ptr;
		}
		*lst = NULL;
	}
}
