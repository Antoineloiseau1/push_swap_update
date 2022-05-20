/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:16:41 by antoine           #+#    #+#             */
/*   Updated: 2022/05/20 15:54:26 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*find lowest number, returning its position on stack, then swap it to b. 
then checking if lst is equal to 4, sort_three and push_a*/

int	find_lowest_index(t_stack *lst)
{
	int lowest;
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
