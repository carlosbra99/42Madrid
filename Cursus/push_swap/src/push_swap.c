/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:27:51 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 16:42:40 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    handle_algos_depend_len(t_list **stack_a, t_list **stack_b)
{
    int		len;

	len = stack_len(stack_a);
	if (len == 2)
		handle_twoargs(stack_a);
	else if (len == 3)
		handle_threeargs(stack_a);
	else if (len == 4 || len == 5)
		handle_fourfive_args(len, stack_a, stack_b);
	else if (len >= 6)
		handle_more_args(stack_a, stack_b);
}

void    free_stacks(t_list **stack_a, t_list **stack_b)
{
    t_list	*head_a;
	t_list	*next;

	head_a = (*stack_a);
	while (head_a != NULL)
	{	
		next = head_a->next;
		free(head_a);
		head_a = next;
	}
	free(stack_a);
	head_a = (*stack_b);
	while (head_a != NULL)
	{	
		next = head_a->next;
		free(head_a);
		head_a = next;
	}
	free(stack_b);
}

int main(int argc, char **argv)
{
    t_list	**stack_a;
	t_list	**stack_b;

	if (argc == 1)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list *));
	stack_b = (t_list **)malloc(sizeof(t_list *));
	*stack_a = NULL;
	*stack_b = NULL;
	if (!initialize_stack(stack_a, argc, argv))
	{
		free_stacks(stack_a, stack_b);
		return (write(2, "Error\n", 6), 0);
	}
	if (check_duplicate(stack_a))
	{
		free_stacks(stack_a, stack_b);
		return (write(2, "Error\n", 6), 0);
	}
	if (check_swapnoprint(stack_a))
		return (free_stacks(stack_a, stack_b), 0);
	handle_algos_depend_len(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	return (0);
}