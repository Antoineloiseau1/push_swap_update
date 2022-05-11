/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:01:40 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 16:40:21 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a)
{
	t_stack	*tmp;
	int		swap;

	tmp = a;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	tmp = tmp->next;
	swap = tmp->number;
	tmp->number = a->number;
	a->number = swap;
	ft_printf("sa\n");
}

void	swap_b(t_stack *b)
{
	t_stack	*tmp;
	int		swap;

	tmp = b;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	tmp = tmp->next;
	swap = tmp->number;
	tmp->number = b->number;
	b->number = swap;
	ft_printf("sb\n");
}

void	swap_s(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		swap;

	tmp_a = a;
	tmp_b = b;
	if (!tmp_a || !tmp_a->next || !tmp_b || !tmp_b->next)
		return ;
	tmp_a = tmp_a->next;
	swap = tmp_a->number;
	tmp_a->number = a->number;
	a->number = swap;
	tmp_b = tmp_b->next;
	swap = tmp_b->number;
	tmp_b->number = b->number;
	b->number = swap;
	ft_printf("ss\n");
}
