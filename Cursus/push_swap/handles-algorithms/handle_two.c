/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:06:33 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 12:45:08 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    handle_twoargs(t_list **stack_a)
{
    t_list *head_a;

    head_a = *stack_a;
    if (head_a->content > head_a->next->content)
    {
        write(1, "sa\n", 3);
        swap(stack_a);
    }
}
