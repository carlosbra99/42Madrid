/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:49:30 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/14 14:01:07 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone_bonus(t_list *lst, void (*del)(void*))
{
    if (!del)
        return ;
    if (lst)
    {
        (*del)(lst->content);
        free(lst);
    }
}