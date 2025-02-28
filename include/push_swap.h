/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:25:11 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/27 23:18:41 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"



char	*ft_strjoin_2(char *s1, char *s2);
void    ft_index(t_stack **a);
void    join_argv(char **av, char **all_arg);
int     check_is_only_digit(char **arg);
int     check_duplicate(t_stack **a, char **arg);

void    ft_sort(t_stack **a, t_stack **b);
void    ft_sort_3(t_stack **a);


// check argument 
void        is_deferent(t_stack **a, char **split_arg, char *all_arg);
void        is_only_digit(char **split_arg, char *all_arg);

// error
void     ft_error();

// sorted
int    is_sorted(t_stack *a);

void    ft_print_stack(t_stack *a, t_stack *b);
void    sort_all(t_stack **a, t_stack **b);

//utils
void ft_clear(char **a);
void ft_clear_lst(t_stack **a);

void    sort_to_a(t_stack **a, t_stack **b);

//movement
void    fimish_sort(t_stack **a);
void move_to_top_0(t_stack **a, t_stack **b,  int first,int secend,  int check);
void move_to_top_1(t_stack **a, t_stack **b,  t_stack *min, int check);
void    move_to_top_0_1(t_stack **a, t_stack **b, t_stack *obj);
void    find_index(t_stack **a, t_stack **b);
// moves
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void ra(t_stack **lst);
void rb(t_stack **lst);
void rr(t_stack **a, t_stack **b);
void rra(t_stack **lst);
void rrb(t_stack **lst);
void rrr(t_stack **a, t_stack **b);
void sa(t_stack **lst);
void sb(t_stack **lst);
void ss(t_stack **a, t_stack **b);

#endif