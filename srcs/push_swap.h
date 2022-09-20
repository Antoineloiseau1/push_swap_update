/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:32:31 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/20 13:11:52 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

# ifndef T_STACK
#  define T_STACK

typedef struct s_stack
{
	long long		number;
	int				place;
	int				index;
	char			*binary;
	struct s_stack	*next;
}					t_stack;
# endif

// create binary:
int		bin_size(int nb);
char	*itao_b(int nb);
void	create_binaries(t_stack *stack);
void	free_binaries(t_stack *stack);

//Indexing:

int		find_lowest(t_stack *stack);
void	create_place(t_stack *stack);
int		find_next_lowest(int lowest, int place, t_stack *stack);
void	update_index(t_stack *lst);

//parsing:

t_stack	*parse(char *argv[]);
void	check_double(t_stack *lst);
void	clear_split(char **split);
void	check_for_char(char *argv[]);
void	check_limits(t_stack *stack);

//utils:

int		lst_len(t_stack *lst);
int		is_sorted(t_stack *a);
void	error(int err_no);
void	display_lst(t_stack *a, t_stack *b);
void	display_stack(t_stack *stack);

//sort functions:
t_stack	*sort_five(t_stack *a, t_stack *b);
int		find_lowest_index(t_stack *lst);
t_stack	*sort_three(t_stack *a);

// Swap functions:
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_s(t_stack *a, t_stack *b);

// Push functions:
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);

// Rotate functions:
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_r(t_stack **a, t_stack **b);

// Reverse rotate functions:
void	rev_rotate_a(t_stack **a);
void	rev_rotate_b(t_stack **b);
void	rev_rotate_r(t_stack **a, t_stack **b);

#endif