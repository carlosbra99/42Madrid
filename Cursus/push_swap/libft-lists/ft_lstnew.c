/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:00:22 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:17:39 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(*head));
	if (head == 0)
	{
		free(head);
		return (NULL);
	}
	head->index = index;
	head->content = content;
	head->p_content = 0;
	head->next = NULL;
	return (head);
}
