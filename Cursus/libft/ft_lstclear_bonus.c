/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:16:02 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/14 14:07:10 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *conc;

    if (!del || !lst || !*lst)
        return ;
    while (lst && *lst)
    {
        conc = (*lst)->next;
        ft_lstdelone_bonus(*lst, del);
        *lst = conc;
    }
}