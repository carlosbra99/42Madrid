/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:40:34 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/08 17:47:37 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap(t_list **stack)
{
    t_list  *first;
    t_list  *second;

    if (*stack != NULL && (*stack)->next != NULL)
    {
        first = *stack;
        second = (*stack)->next;
        first->next = second->next;
        second->next = first;
        *stack = second;
    }
}

void    ss(t_list **stack_a, t_list **stack_b)
{
    swap(stack_a);
    swap(stack_b);
}

void    pa(t_list **stack_a, t_list **stack_b)
{
    t_list  *head_a;
    t_list  *head_b;

    head_a = *stack_a;
    head_b = *stack_b;
    *stack_b = head_b->next;
    head_b->next = head_a;
    *stack_a = head_b;
}

void    pb(t_list **stack_a, t_list **stack_b)
{
    t_list  *head_a;
    t_list  *head_b;

    head_a = *stack_a;
    head_b = *stack_b;
    *stack_a = head_a->next;
    head_a->next = head_b;
    *stack_b = head_a;
}

void    r(t_list **stack)
{
    t_list  *first;
    t_list  *last;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    last = *stack;
    while (last->next != NULL)
    {
        last = last->next;
    }
    first = *stack;
    *stack = first->next;
    last->next = first;
    first->next = NULL;
}
