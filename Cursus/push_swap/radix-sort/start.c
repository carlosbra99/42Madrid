/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:46:31 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 12:33:10 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push_to_a(t_list **stack_a, t_list **stack_b)
{
    while (*stack_b)
    {
        pa(stack_a, stack_b);
        write(1, "pa\n", 3);
    }
    
}

void    sort_by_digit(int digit, t_list **stack_a, t_list **stack_b)
{
    int     len;
    int     to_check;
    t_list  *head;

    len = stack_len(stack_a);
    head = *stack_a;
    while (len > 0)
    {
        to_check = (head->p_content >> digit) & 1;
        if (to_check)
        {
            r(stack_a);
            write(1, "ra\n", 3);
        }
        else
        {
            pb(stack_a, stack_b);
            write(1, "pb\n", 3);        
        }
        head = *stack_a;
        len--;
    }
}

void    radix_sort(t_list **stack_a, t_list **stack_b)
{
    int digit;

    digit = 0;
    while (!check_swapnoprint(stack_a))
    {
        sort_by_digit(digit, stack_a, stack_a);
        push_to_a(stack_a, stack_b);
        digit++;
    }
}

void    handle_more_args(t_list **stack_a, t_list **stack_b)
{
    converting_to_positive(stack_a);
    radix_sort(stack_a, stack_b);
}