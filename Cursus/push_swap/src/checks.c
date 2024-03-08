/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:41:00 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/08 17:25:42 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_swapnoprint(t_list **stack)
{
    t_list *head;
    
    head = *stack;
    if(!head)
        return (0);
    while(head->next)
    {
        if(head->content > head->next->content)
            return (0);
        head = head->next;
    }
    return (1);
}

int check_duplicate(t_list **stack)
{
    int     dups;
    t_list  *head;
    t_list  *sec_head;

    dups = 0;
    head = *stack;
    while (head)
    {
        sec_head = *stack;
        while (sec_head)
        {
            if (head->content == sec_head->content
                    && head->index != sec_head->index)
                dups++;
            sec_head = sec_head->next;
        }
        head = head->next;
    }
    if (dups > 0)
        return (1);
    else
        return (0);
}

int ft_checks(char *str)
{
    if (!check_not_digit(str) || !check_symbols(str))
        return (0);
    return (1);
}

int check_not_digit(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
       if ((str[i] < 48 || str[i] > 57) && str[i] != 45 && str[i] != 43)
        return (0); 
    }
    return (1);
}

int check_symbols(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if ((str[i] == 45 || str[i] == 43)
                && (str[i + 1] < 48 || str[i + 1] > 57))
            return (0);
    }
    return (1);
}