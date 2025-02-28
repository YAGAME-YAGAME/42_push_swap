/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:12:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/28 18:18:45 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rb(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	tmp2 = *lst;
	*lst = (*lst)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp2;
	tmp2->next = NULL;
	write(1, "rb\n", 3);
}
