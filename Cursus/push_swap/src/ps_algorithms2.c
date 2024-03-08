/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithms2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:40:41 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/08 17:53:06 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rr(t_list **stack_a, t_list **stack_b)
{
    r(stack_a);
    r(stack_b);
}

void    rev_r(t_list **stack)
{
    t_list  *head;
    t_list  *tail;
    
    if (ft_lstsize(*stack) < 2)
        return ;
    head = *stack;
    tail = ft_lstlast(head);
    while (head)
    {
        if (head->next->next == NULL)
        {
            head->next = NULL;
            break ;
        }
        head = head->next;
    }
    tail->next = *stack;
    *stack = tail;
}

void    rev_rr(t_list **stack_a, t_list **stack_b)
{
    rev_r(stack_a);
    rev_r(stack_b);
}