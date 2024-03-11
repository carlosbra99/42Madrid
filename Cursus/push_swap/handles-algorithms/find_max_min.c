/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:07:39 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 12:54:39 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_index_of_minimum(t_list **stack)
{
    int     min;
    int     min_index;
    int     i;
    t_list  *head;
    
    head = *stack;
    min = head->content;
    i = 0;
    min_index = i;
    while (head)
    {
        if (head->content < min)
        {
            min = head->content;
            min_index = i;
        }
        head = head->next;
        i++;
    }
    return (min_index);
}

int get_index_of_maximum(t_list **stack)
{
    int     min;
    int     min_index;
    int     i;
    t_list  *head;
    
    head = *stack;
    min = head->content;
    i = 0;
    min_index = i;
    while (head)
    {
        if (head->content > min)
        {
            min = head->content;
            min_index = i;
        }
        head = head->next;
        i++;
    }
    return (min_index);
}