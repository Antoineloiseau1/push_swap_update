/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_for_longest_bin.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:29:55 by antoine           #+#    #+#             */
/*   Updated: 2022/09/20 16:56:14 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	look_for_longest_bin(t_stack *stack)
{
	size_t	len;

	len = ft_strlen(stack->binary);
	display_stack(stack);
	while (stack)
	{
		if (ft_strlen(stack->binary) > len)
			len = ft_strlen(stack->binary);
		stack = stack->next;
	}
	return (len);
}