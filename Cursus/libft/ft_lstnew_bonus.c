/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:00:22 by cbravo-a          #+#    #+#             */
/*   Updated: 2023/02/14 14:01:57 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew_bonus(void *content)
{
    t_list *nodo;

    nodo = (t_list*)malloc(sizeof(t_list));
    if (nodo == 0)
        return (NULL);
    nodo->content = content;
    nodo->next = NULL;
    return (nodo);
}
