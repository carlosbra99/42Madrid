/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:43:50 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/07 19:43:17 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *first;
    t_list *new;

    if (!f || !del)
        return (NULL);
    first = NULL;
    while (lst)
    {
        if (!(new = ft_lstnew((*f)(lst->content))))
        {
            while (first)
            {
                new = first->next;
                (*del)(first->content);
                free(first);
                first = new;
            }
            lst = NULL;
            return (NULL); 
        }
        ft_lstadd_back(&first, new);
        lst = lst->next;
    }
    return (first);
}