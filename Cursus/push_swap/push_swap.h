/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbravo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:15:49 by cbravo-a          #+#    #+#             */
/*   Updated: 2024/03/08 17:08:26 by cbravo-a         ###   ########.fr       */
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

#endif
