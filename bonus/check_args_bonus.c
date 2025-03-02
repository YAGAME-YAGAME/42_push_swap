/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:07:36 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 21:11:16 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int    check_isdigit(char *s)
{
    if(*s == '-' || *s == '+')
        s++;
    while(*s && (*s >= '0' && *s <= '9'))
        s++;
    if (*s && !(*s >= '0' && *s <= '9'))
        return (0);
    return (1);
}

int duplicate(t_stack *a, int num)
{
    while(a)
    {
        if (a->data == num)
            return (-1);
        a = a->next;
    }
    return (1);
}

int     check_duplicate(t_stack **a, char **arg)
{
    int i;
    long num;
    int check;
    t_stack *node;
    
    num = 0;
    i = 0;
    check = 1;
    while(arg[i])
    {
        num = ft_atoi(arg[i], &check);
        if (check == 0)
            return (0);
        if (duplicate(*a, num) == -1)
            return (0);
        node = ft_lstnew(num);
        ft_lstadd_back(a, node);
        i++;
    }
    return (1);
}
void    join_argv(char **av, char **all_arg)
{
    while(*av)
    {
        *all_arg = ft_strjoin_2(*all_arg, *av);
        if (*(av + 1))
            *all_arg = ft_strjoin_2(*all_arg, " ");
        av++;
    }
}

int    check_is_only_digit(char **arg)
{
    int i;

    i = 0;
    while(arg[i])
    {
        if (!check_isdigit(arg[i]))
            return (0);
        i++;
    }
    return (1);
}


int    is_sorted(t_stack *a)
{
    t_stack *tmp;
    t_stack *tmp_1;

    tmp = a;
    
    while(tmp)
    {
        tmp_1 = tmp->next;
        while(tmp_1)
        {
            if(tmp->data > tmp_1->data)
                return (1);
            tmp_1 = tmp_1->next;
        }
        tmp = tmp->next;
        tmp_1 = tmp;
    }
    return (-1);
}

void    is_only_digit(char **split_arg, char *all_arg)
{
    if(!check_is_only_digit(split_arg))
    {
        ft_clear(split_arg);
        free(all_arg);
        ft_error();
        exit(0);
    }
}
void     is_deferent(t_stack **a, char **split_arg, char *all_arg)
{
    if (!check_duplicate(a, split_arg))
    {    
        ft_clear(split_arg);
        free(all_arg);
        ft_clear_lst(a);
        ft_error();
    }
}
