/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:42:48 by yagame            #+#    #+#             */
/*   Updated: 2025/03/02 21:16:15 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap_bonus.h"


int     check_instruction(t_stack **a, t_stack **b, char *instruction)
{
    if (ft_strncmp("pa\n", instruction, 3) == 0)
        pa(a, b);
    else if (ft_strncmp("pb\n", instruction, 3) == 0)
        pb(a, b);
    else if (ft_strncmp("ra\n", instruction, 3) == 0)
        ra(a);
    else if (ft_strncmp("rb\n", instruction, 3) == 0)
        rb(b);
    else if (ft_strncmp("rr\n", instruction, 3) == 0)
        rr(a, b);
    else if (ft_strncmp("rrr\n", instruction, 4) == 0)
        rrr(a, b);
    else if (ft_strncmp("rra\n", instruction, 4) == 0)
        rra(a);
    else if (ft_strncmp("rrb\n", instruction, 4) == 0)
        rrb(b);
    else if (ft_strncmp("sa\n", instruction, 3) == 0)
        sa(a);
    else if (ft_strncmp("sb\n", instruction, 3) == 0)
        sb(b);
    else if (ft_strncmp("ss\n", instruction, 3) == 0)
        ss(a, b);
    else
        return (-1);
    return (1);
}

void   instructions(t_stack **a, t_stack **b, char **split_arg, char *all_arg)
{
    char *tmp;
    char *line;
    
    line = get_next_line(0);
    while(line)
    {
        tmp = line;
        if(check_instruction(a, b, line) == -1)
        {
            write(1, RED "KO\n" RESET, 10);
            ft_clear(split_arg);
            free(all_arg);
            ft_clear_lst(a);
            ft_error();
        }
        line = get_next_line(0);
        free(tmp);
    }
    if (is_sorted(*a) == -1 && !*b)
        write(1, GREEN "OK\n" RESET, 10);
    else 
        write(1, RED "KO\n" RESET, 10);
}
