/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:44:43 by antoine           #+#    #+#             */
/*   Updated: 2022/09/18 15:34:01 by antoine          ###   ########.fr       */
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
