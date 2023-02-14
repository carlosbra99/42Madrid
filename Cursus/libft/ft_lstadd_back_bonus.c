/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:41:11 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/14 14:06:42 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
    t_list *ult;
    
    if (lst)
    {
        if(*lst)
        {
            ult = ft_lstlast_bonus(*lst);
            ult->next = new;
        }
        else
            *lst = new;
    }
}
