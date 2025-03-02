/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 20:31:08 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	init_stack(t_stack **a, t_stack **b)
{
	*a = NULL;
	*b = NULL;
}

int	av_check(char *str)
{
	if (!str || *str == '\0')
		return (0);
	while (*str && *str == ' ')
		str++;
	if (*str == '\0')
		return (0);
	else
		return (1);
}

void	check_all_av(char **av, int ac)
{
	int	i;
	int	check;

	i = 1;
	check = 1;
	while (i < ac)
	{
		check = av_check(av[i]);
		if (check == 0)
			ft_error();
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*all_arg;
	char	**split_arg;

	all_arg = NULL;
	if (ac < 2)
		return (0);
	init_stack(&a, &b);
	check_all_av(av, ac);
	join_argv(av + 1, &all_arg);
	split_arg = ft_split(all_arg, ' ');
	is_only_digit(split_arg, all_arg);
	is_deferent(&a, split_arg, all_arg);
	instructions(&a, &b, split_arg, all_arg);
	ft_clear(split_arg);
	free(all_arg);
	ft_clear_lst(&a);
	return (0);
}
