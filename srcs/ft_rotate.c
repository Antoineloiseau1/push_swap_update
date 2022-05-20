/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:36:16 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/20 15:51:50 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*rotate;

	tmp = *a;
	rotate = *a;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	*a = tmp->next;
	while (tmp && tmp->next)
		tmp = tmp->next;
	tmp->next = rotate;
	rotate->next = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*rotate;

	tmp = *b;
	rotate = *b;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	*b = tmp->next;
	while (tmp && tmp->next)
		tmp = tmp->next;
	tmp->next = rotate;
	rotate->next = NULL;
	ft_printf("rb\n");
}

void	rotate_r(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	t_stack	*rotate;

	tmp_a = *a;
	tmp_b = *b;
	if (!tmp_a || !tmp_b || !tmp_a->next || !tmp_b->next)
		return ;
	rotate = tmp_a;
	*a = tmp_a->next;
	while (tmp_a && tmp_a->next)
		tmp_a = tmp_a->next;
	tmp_a->next = rotate;
	rotate->next = NULL;
	rotate = tmp_b;
	*b = tmp_b->next;
	while (tmp_b && tmp_b->next)
		tmp_b = tmp_b->next;
	tmp_b->next = rotate;
	rotate->next = NULL;
	ft_printf("rr\n");
}
