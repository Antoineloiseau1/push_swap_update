/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:32:31 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/13 09:05:00 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <limits.h>

void		display_lst(t_stack *a, t_stack *b);
void		error(int err_no, char *text);
t_stack		*parse(char **args);
void		check_double(t_stack *lst);
void		clear_split(char **split);
void		check_for_char(char **tab);
void		check_limits(t_stack *lst);
long int	ft_atoi(const char *str);
void		create_index(t_stack *lst);
int			lst_len(t_stack *lst);
void        sort_three(t_stack *a);
int         is_sorted(t_stack *a);

// Swap functions:
void		swap_a(t_stack *a);
void		swap_b(t_stack *b);
void		swap_s(t_stack *a, t_stack *b);

// Push functions:
void		push_a(t_stack **a, t_stack **b);
void		push_b(t_stack **a, t_stack **b);

// Rotate functions:
void		rotate_a(t_stack **a);
void		rotate_b(t_stack **b);
void		rotate_r(t_stack **a, t_stack **b);

// Reverse rotate functions:
void		rev_rotate_a(t_stack **a);
void		rev_rotate_b(t_stack **b);
void		rev_rotate_r(t_stack **a, t_stack **b);

#endif