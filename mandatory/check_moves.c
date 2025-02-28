/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:42:52 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/24 21:54:06 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_sort(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp && tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0); // Not sorted
		tmp = tmp->next;
	}
	return (1);
}

void	ft_sort_3(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->data;
	second = (*a)->next->data;
	third = (*a)->next->next->data;
	if (first > second && first > third)
		ra(a);
	if (first < second && second > third)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
}
