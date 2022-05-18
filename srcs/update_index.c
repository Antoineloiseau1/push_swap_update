/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:13 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/18 12:52:49 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this function updates indexes on stacks

#include "push_swap.h"

void	update_index(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}