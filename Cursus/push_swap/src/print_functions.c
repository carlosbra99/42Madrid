/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:55:14 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 10:00:57 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    printwholestruct(t_list **stack)
{
    t_list *head;
    
    head = *stack;
    if (stack = NULL || *stack == NULL)
    {
        printf("Linked list is empty\n");
        return ;
    }
    while (head != NULL)
    {
        printf("content: [%i] %i\n", head->index, head->content);
        head = head->next;
    }
}