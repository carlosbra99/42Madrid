/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:15:49 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/11 17:09:46 by cbravo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
    int     content;
    int     p_content;
    int     index;
    struct s_list   *next;
    
}                   t_list;

//Libft list
t_list  *ft_lstnew(int content, int index);

void    ft_lstadd_front(t_list **lst, t_list *new);

int     ft_lstsize(t_list *lst);

t_list  *ft_lstlast(t_list *lst);

void    ft_lstadd_back(t_list **lst, t_list *new);

void    ft_lstdelone(t_list *lst, void (*del)(int));

void	ft_lstclear(t_list **lst, void (*del)(int));

void	ft_lstiter(t_list *lst, void (*f)(int));

char	**ft_split(char const *s, char c);

//Print functions
int     check_swapnoprint(t_list **stack);

//int		how_many_swaps(t_list **stack);

void	printwholestruct(t_list **stack_a);

//PS functions
void	swap(t_list **stack);

void	ss(t_list **stack_a, t_list **stack_b);

void	pa(t_list **stack_a, t_list **stack_b);

void	pb(t_list **stack_a, t_list **stack_b);

void	r(t_list **stack);

void	rr(t_list **stack_a, t_list **stack_b);

void	rev_r(t_list **stack);

int		initialize_stack(t_list **stack_a, int argc, char **argv);

//Checks
int		check_duplicate(t_list **stack);

int		check_not_digit(char *str);

int		check_symbols(char *str);

int		ft_checks(char *str);

//Handle algs
void	handle_twoargs(t_list **stack_a);

void	handle_threeargs(t_list **stack_a);

void	handle_fourfive_args(int argc, t_list **stack_a,
			t_list **stack_b);

void	handle_more_args(t_list **stack_a, t_list **stack_b);

void	first_steps(int argc, t_list **stack_a, t_list **stack_b);

void	pushing_big(t_list **stack_a, t_list **stack_b);

//Utils
int		after_which_index(int num, t_list **stack);

int		is_bigger_than_stack(int num, t_list **stack);

int		is_smallest_than_stack(int num, t_list **stack);

int		stack_len(t_list **stack);

//Find max min
int		get_index_of_minimum(t_list **stack);

int		get_index_of_maximum(t_list **stack);

//Radix
void	converting_to_positive(t_list **stack);

int		ft_atoi_err(char *str, int *err);

#endif
