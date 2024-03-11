/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:38:04 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:17:09 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*temp;

	if (lst || f)
	{
		temp = lst;
		while (temp != NULL)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}
