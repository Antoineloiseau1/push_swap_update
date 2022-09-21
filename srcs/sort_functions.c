/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:58:49 by antoine           #+#    #+#             */
/*   Updated: 2022/09/21 13:15:56 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_three(t_stack *a)
{
	if (a->number < a->next->number && a->next->number > a->next->next->number)
	{
		rev_rotate_a(&a);
		if (is_sorted(a))
			return (a);
		swap_a(a);
		return (a);
	}
	if (a->number > a->next->number && a->next->number > a->next->next->number)
	{
		swap_a(a);
		rev_rotate_a(&a);
		return (a);
	}
	if (a->number > a->next->number && a->next->number < a->next->next->number)
	{
		if (a->number < a->next->next->number)
			swap_a(a);
		else
		{
			rev_rotate_a(&a);
			rev_rotate_a(&a);
		}
	}
	return (a);
}

t_stack	*sort_five(t_stack *a, t_stack *b)
{
	int	index;

	index = find_lowest_index(a);
	if (index <= 2)
	{
		while (a->index != index)
			rotate_a(&a);
		push_b(&a, &b);
	}
	else
	{
		while (a->index != index)
			rev_rotate_a(&a);
		push_b(&a, &b);
	}
	if (lst_len(a) == 4)
		a = sort_five(a, b);
	a = sort_three(a);
	push_a(&a, &b);
	update_index(a);
	return (a);
}

int	find_lowest_index(t_stack *lst)
{
	int	lowest;
	int	index;

	index = lst->index;
	lowest = lst->number;
	while (lst)
	{
		if (lst->number < lowest)
		{
			lowest = lst->number;
			index = lst->index;
		}
		lst = lst->next;
	}
	return (index);
}

t_stack	*radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	nb_max;
	int	i;
	int	j;
	int	numb;

	nb_max = lst_len(a);
	max_bits = get_max_bits(a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < nb_max)
		{
			numb = a->place;
			if (((numb >> i) & 1) == 1)
				rotate_a(&a);
			else
				push_b(&a, &b);
		}
		i++;
		while (lst_len(b) != 0)
			push_a(&a, &b);
	}
	return (a);
}

int	get_max_bits(t_stack *a)
{
	int	nb_max;
	int	max_bits;

	nb_max = lst_len(a);
	max_bits = 0;
	while (nb_max >> max_bits != 0)
		max_bits++;
	return (max_bits);
}
