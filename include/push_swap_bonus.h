/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:25:11 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 20:34:28 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

#include "../bonus/get/get_next_line.h"
#include "../libft/libft.h"

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"


// best_move_utils
t_stack	    *find_small(t_stack *a);
void	    find_targer(t_stack **a, t_stack **b);
void	    set_index_pos(t_stack *stack);
void	    find_index(t_stack **a, t_stack **b);
int	        how_moves(t_stack *st, t_stack *tmp);


// do instriuctio
void   instructions(t_stack **a, t_stack **b, char **split_arg, char *all_arg);


char	*ft_strjoin_2(char *s1, char *s2);
void    join_argv(char **av, char **all_arg);
int     check_is_only_digit(char **arg);
int     check_duplicate(t_stack **a, char **arg);

// check argument 
void        is_deferent(t_stack **a, char **split_arg, char *all_arg);
void        is_only_digit(char **split_arg, char *all_arg);

// error
void     ft_error();

// sorted
int    is_sorted(t_stack *a);


//utils
void ft_clear(char **a);
void ft_clear_lst(t_stack **a);

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