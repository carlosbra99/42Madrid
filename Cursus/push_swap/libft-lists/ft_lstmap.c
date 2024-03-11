/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:43:50 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:18:29 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(int))
{
	t_list	*temp;
	t_list	*result;
	int		i;

	if (!lst || !f || !del)
		return (NULL);
	result = 0;
	i = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content), i);
		i++;
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);
		lst = lst->next;
	}
	return (result);
}
