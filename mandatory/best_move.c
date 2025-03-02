/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:07:11 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 22:56:53 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_get_move(t_stack **a, t_stack **b, t_stack *tmp)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(*a) - tmp->target->index;
	len_b = ft_lstsize(*b) - tmp->index;
	if (tmp->pos == 1 && tmp->target->pos == 1)
	{
		if (tmp->index >= tmp->target->index)
			return (tmp->index);
		else
			return (tmp->target->index);
	}
	else if (tmp->pos == 0 && tmp->target->pos == 0)
	{
		if (len_b >= len_a)
			return (len_b);
		else
			return (len_a);
	}
	else if (tmp->pos == 1 && tmp->target->pos == 0)
		return (len_a + tmp->index);
	else
		return (len_b + tmp->target->index);
}

void	find_move(t_stack **a, t_stack **b)
{
	t_stack	*tmp_b;

	tmp_b = *b;
	while (tmp_b)
	{
		tmp_b->moves = ft_get_move(a, b, tmp_b);
		tmp_b = tmp_b->next;
	}
}

t_stack	*find_min_move(t_stack *st)
{
	t_stack	*min;

	min = st;
	while (st)
	{
		if (min->moves > st->moves)
		{
			min = st;
		}
		st = st->next;
	}
	return (min);
}

void	ready_to_push(t_stack **a, t_stack **b)
{
	t_stack	*min_move;
	int		len_a;
	int		len_b;

	min_move = find_min_move(*b);
	if (min_move->pos == 1 && min_move->target->pos == 1)
	{
		if (min_move->index >= min_move->target->index)
			move_to_top_1(a, b, min_move, 1);
		else
			move_to_top_1(a, b, min_move, 0);
	}
	else if (min_move->pos == 0 && min_move->target->pos == 0)
	{
		len_a = ft_lstsize(*a) - min_move->target->index;
		len_b = ft_lstsize(*b) - min_move->index;
		if (len_a >= len_b)
			move_to_top_0(a, b, min_move, 1);
		else
			move_to_top_0(a, b, min_move, 0);
	}
	else
		move_to_top_0_1(a, b, min_move);
}

void	sort_to_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		find_targer(a, b);
		find_index(a, b);
		find_move(a, b);
		ready_to_push(a, b);
		pa(a, b);
		tmp = *b;
	}
	find_index(a, b);
	fimish_sort(a);
}
