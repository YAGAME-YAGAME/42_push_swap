/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:42:31 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 21:57:55 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*tmp_1;

	tmp = a;
	while (tmp)
	{
		tmp_1 = tmp->next;
		while (tmp_1)
		{
			if (tmp->data > tmp_1->data)
				return (1);
			tmp_1 = tmp_1->next;
		}
		tmp = tmp->next;
		tmp_1 = tmp;
	}
	return (-1);
}

void	is_only_digit(char **split_arg, char *all_arg)
{
	if (!check_is_only_digit(split_arg))
	{
		ft_clear(split_arg);
		free(all_arg);
		ft_error();
		exit(0);
	}
}

void	is_deferent(t_stack **a, char **split_arg, char *all_arg)
{
	if (!check_duplicate(a, split_arg))
	{
		ft_clear(split_arg);
		free(all_arg);
		ft_clear_lst(a);
		ft_error();
	}
}
