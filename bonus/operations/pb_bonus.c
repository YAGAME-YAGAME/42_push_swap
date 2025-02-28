/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:09:14 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/28 01:44:13 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../include/push_swap_bonus.h"

void pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!a || !*a)
        return ;
    tmp = (*a)->next;
    (*a)->next = *b;
    *b = *a;
    *a = tmp;
}