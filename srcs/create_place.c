/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:00:12 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/20 12:59:30 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_next_lower(int lower, int place, t_stack *stack)
{
	int	next_lower;
	t_stack	*tmp;

	tmp = stack;
	while (stack && stack->number <= lower)
		stack = stack->next;
	next_lower = stack->number;
	while (stack)
	{
		if (stack->number < next_lower && stack->number > lower)
		{
			next_lower = stack->number;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->place = place;
	return (next_lower);
}

int	find_lower(t_stack *stack)
{
	t_stack	*tmp;
	int	lower;

	lower = stack->number;
	tmp = stack;
	while (stack)
	{
		if (stack->number < lower)
		{
			lower = stack->number;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->place = 0;
	return (lower);
}

void	create_place(t_stack *stack)
{
	int	lower;
	int	i;
	int	len;
	
	lower = find_lower(stack);
	i = 1;
	len = lst_len(stack);
	while (i < len)
	{
		lower = find_next_lower(lower, i, stack);
		i++;
	}
}