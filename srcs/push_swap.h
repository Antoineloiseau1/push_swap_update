/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:32:31 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/09 17:08:42 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

void	ft_displaylst(t_stack *a, t_stack *b);
int	ft_error(int err_no);

// Swap functions:
void	ft_swap_a(t_stack *a);
void	ft_swap_b(t_stack *b);
void	ft_swap_s(t_stack *a, t_stack *b);

// Push functions:
void	ft_push_a(t_stack **a, t_stack **b);
void	ft_push_b(t_stack **a, t_stack **b);

// Rotate functions:
void	ft_rotate_a(t_stack **a);
void	ft_rotate_b(t_stack **b);
void	ft_rotate_r(t_stack **a, t_stack **b);

// Reverse rotate functions:
void	ft_rev_rotate_a(t_stack **a);
void	ft_rev_rotate_b(t_stack **b);
void	ft_rev_rotate_r(t_stack **a, t_stack **b);

#endif