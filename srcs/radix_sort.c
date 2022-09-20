/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:58:49 by antoine           #+#    #+#             */
/*   Updated: 2022/09/20 16:56:53 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*radix_sort(t_stack *a, t_stack *b)
{
	(void)b;
	size_t len = look_for_longest_bin(a);
	ft_printf("%d\n", len);
	return(a);
}