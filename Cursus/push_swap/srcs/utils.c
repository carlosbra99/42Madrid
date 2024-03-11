/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:39:48 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/08 17:08:20 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int after_which_index(int num, t_list   **stack)
{
    t_list  *head;
    int     i;
    
    i = 0;
    head = *stack;
    while (head)
    {
        if((head->content) >= num)
            return(i);
        if((head->next))
            head = head->next;
        else
            head = NULL;
        i++;
    }
    return (0);
}

int is_bigger_than_stack(int num, t_list **stack)
{
    t_list *head;
    
    head = *stack;
    while (head)
    {
        if((head->content) >= num)
            return (0);
        if(head-> next)
            head = head->next;
        else
            head = NULL;
    }
    return (1);
}

int is_smallest_than_stack(int num, t_list **stack)
{
    t_list *head;

    head = *stack;
    while (head)
    {
        if((head->content) <= num)
            return (0);
        head = head->next;
    }
    return (1);
}

int stack_len(t_list **stack)
{
    t_list *head;
    int     i;
    
    i = 0;
    head = *stack;
    while (head)
    {
        head = head->next;
        i++;
    }
    return (i);
}