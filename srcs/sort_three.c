/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:44:43 by antoine           #+#    #+#             */
/*   Updated: 2022/05/13 10:05:16 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_stack *a)
{          
    if (a->number < a->next->number && a->next->number > a->next->next->number)
	{
		rev_rotate_a(&a);
		if (is_sorted(a))
			return;
		swap_a(a);
		return ;
	}
	if (a->number > a->next->number && a->next->number > a->next->next->number)
	{
		swap_a(a);
		rev_rotate_a(&a);
		return ;
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


}
/*
1 3 2 
2 3 1 
2 1 3
3 1 2 
3 2 1*/
