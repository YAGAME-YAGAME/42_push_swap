/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:08:30 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 22:27:24 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_midel(t_stack *a)
{
	int		midel;
	t_stack	*tmp;

	tmp = a;
	midel = 0;
	while (tmp)
	{
		midel += tmp->data;
		tmp = tmp->next;
	}
	return (midel / ft_lstsize(a));
}

int	get_index(t_stack **a, int data)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->data == data)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (-1);
}

void	move_top(t_stack **a, int data)
{
	int	index;

	index = get_index(a, data);
	if (index == 0)
		return ;
	if (index <= ft_lstsize(*a) / 2)
	{
		while (index--)
			ra(a);
	}
	else
	{
		while (index++ < ft_lstsize(*a))
			rra(a);
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	len;

	len = ft_lstsize(*a);
	while (len-- > 3)
		pb(a, b);
	ft_sort_3(a);
}

void	sort_all(t_stack **a, t_stack **b)
{
	int	len;

	len = ft_lstsize(*a);
	if (len == 3)
	{
		ft_sort_3(a);
		return ;
	}
	else if (len == 2 && (*a)->data > (*a)->next->data)
	{
		sa(a);
		return ;
	}
	else
		sort_stack(a, b);
}
