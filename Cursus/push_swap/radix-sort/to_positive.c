/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_positive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:46:53 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 12:40:00 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_smallest(t_list **stack)
{
    t_list  *head;
    int     smallest;

    head = *stack;
    smallest = INT16_MAX;
    while (head)
    {
        if (head->content < smallest)
            smallest = head->content;
        head = head->next;
    }
    return (smallest);
}

void    converting_to_positive(t_list **stack)
{
    t_list  *head;
    t_list  *tmp;
    int     smallest;

    head = *stack;
    smallest = get_smallest(stack);
    head = *stack;
    while (head)
    {
        tmp = *stack;
        head->p_content = 0;
        while (tmp)
        {
            if (tmp->content < smallest || tmp->content >= head->content)
                tmp = tmp->next;
            else
            {
                head->p_content++;
                tmp = tmp->next;
            }
        }
        head = head->next;
    }
}
