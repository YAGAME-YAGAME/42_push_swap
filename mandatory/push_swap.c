/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/20 00:43:13 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    init_stack(t_stack **a, t_stack **b)
{
    *a = NULL;
    *b = NULL;
}

void ll()
{
    system("leaks -q push_swap");
}
int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
    int count;
    char *all_arg;
    char **split_arg;

    all_arg = NULL;

    count = 0;
    if (ac < 2)
        return (0);
    init_stack(&a, &b);
    join_argv(av + 1, &all_arg);
    split_arg = ft_split(all_arg, ' ');
    count = count_word(all_arg, ' ');
    if(!check_is_only_digit(split_arg))
    {
        ft_clear(split_arg);
        ft_printf("\033[;31mthe arguments are not valid\033[;31m \n");
        exit(0);
    }
    if (!check_duplicate(&a, split_arg))
    {
        ft_printf("\033[;31mthere are duplicates in the arguments\033[;31m \n");   
        ft_clear(split_arg);
        ft_clear_lst(&a);
        exit(0);
    }
    sort_all(&a, &b);
    sort_to_a(&a, &b);
    ft_print_stack(a, b);
    return (0);
}