/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:54:18 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/13 10:03:52 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*end;

	tmp = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	end = tmp->next;
	end->next = *a;
	tmp->next = NULL;
	*a = end;
	ft_printf("rra\n");
}

void	rev_rotate_b(t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *b;
	*b = tmp->next;
	tmp->next = NULL;
	ft_printf("rrb\n");
}

void	rev_rotate_r(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	if (!tmp_a || !tmp_b || !tmp_a->next || !tmp_b->next)
		return ;
	while (tmp_a->next->next)
		tmp_a = tmp_a->next;
	tmp_a->next->next = *a;
	*a = tmp_a->next;
	tmp_a->next = NULL;
	while (tmp_b->next->next)
		tmp_b = tmp_b->next;
	tmp_b->next->next = *b;
	*b = tmp_b->next;
	tmp_b->next = NULL;
	ft_printf("rrr\n");
}
