/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmenkovi <tmenkovi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:29:18 by tmenkovi          #+#    #+#             */
/*   Updated: 2024/01/21 13:03:34 by tmenkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	long			val;
	int				position;
	int				upordown;
	int				price;
	int				cheapest;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

/* error_utils.c and errors.c */
int		correct_num(char **argv, int i, int j);
void	free_array(char **argv);
int		error_handling(int argc, char **argv);
void	free_stack(t_stack **s);

/* stack_utils */
t_stack	*ft_stacklast(t_stack *s);
t_stack	*ft_stacknew(long long content);
void	ft_stackadd_back(t_stack **s, t_stack *new);
int		stack_len(t_stack *s);

/* init.c */
void	stack_init(t_stack **a, int argc, char **argv);
void	init_nodes(t_stack*a, t_stack *b);
void	push_init(t_stack **a, t_stack **b);

/* checker.c */
int		is_sorted(t_stack *s);
int		highest(t_stack *s);

/* utils.c */
void	current_position(t_stack *s);
t_stack	*find_smallest(t_stack *s);
void	find_target(t_stack *a, t_stack *b);
void	find_price(t_stack *a, t_stack *b);
void	set_cheapest(t_stack *s);

/* operations.c */
void	rotate(t_stack **s);
void	reverse_rotate(t_stack **s);
void	swap(t_stack **s);
void	push(t_stack **s1, t_stack **s2);

/* swap.c */
void	sa(t_stack	**a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack**b);

/* rotate.c */
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	finish_rotation(t_stack **s, t_stack *top, char s_name);
void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest);

/* revrotate.c */
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	reverse_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest);

/* push.c */
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

/* algorithm.c */
void	small_sorts(t_stack **s);
void	sort_five(t_stack **a, t_stack **b);
t_stack	*return_cheapest(t_stack *s);
void	push_swap(t_stack **a, t_stack **b);

#endif
