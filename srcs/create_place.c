/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:00:12 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/20 10:21:14 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_next_lowest(int lowest, int place, t_stack *stack)
{
	int		next_lowest;
	t_stack	*tmp;

	tmp = stack;
	while (stack && stack->number <= lowest)
		stack = stack->next;
	next_lowest = stack->number;
	while (stack)
	{
		if (stack->number <= next_lowest && stack->number > lowest)
		{
			next_lowest = stack->number;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->place = place;
	return (next_lowest);
}

int	find_lowest(t_stack *stack)
{
	t_stack	*tmp;
	int		lowest;

	lowest = stack->number;
	tmp = stack;
	while (stack)
	{
		if (stack->number < lowest)
		{
			lowest = stack->number;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->place = 1;
	return (lowest);
}

void	create_place(t_stack *stack)
{
	int	lowest;
	int	i;
	int	len;

	lowest = find_lowest(stack);
	i = 2;
	len = lst_len(stack);
	while (i < len + 1)
	{
		lowest = find_next_lowest(lowest, i, stack);
		i++;
	}
}
