/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_four_five_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:07:16 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:46:27 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    first_steps(int argc, t_list **stack_a, t_list **stack_b)
{
    t_list	*head_a;
	t_list	*head_b;

	if (argc == 5)
	{
		pb(stack_a, stack_b);
		write(1, "pb\n", 3);
	}
	pb(stack_a, stack_b);
	write(1, "pb\n", 3);
	handle_threeargs(stack_a);
	head_a = *stack_a;
	head_b = *stack_b;
	if (head_a->next != NULL && head_b->content > head_a->content
		&& head_b->content < head_a->next->content)
	{	
		pa(stack_a, stack_b);
		write(1, "pa\n", 3);
		swap(stack_a);
		write(1, "sa\n", 3);
	}
}

void    pushing_big(t_list **stack_a, t_list **stack_b)
{
    //t_list	*head_a;
	t_list	*head_b;

	//head_a = *stack_a;
	head_b = *stack_b;
	if (is_bigger_than_stack(head_b->content, stack_a))
	{
		pa(stack_a, stack_b);
		r(stack_a);
		write(1, "pa\nra\n", 6);
		if (*stack_b)
			head_b = *stack_b;
	}
}