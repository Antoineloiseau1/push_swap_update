/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:13 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/12 19:15:14 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_index(t_stack *lst)
{
	t_stack	*tmp;
	t_stack	*buf;
	int		i;
	int 	current;
	int 	lowest;
	int		times = 9;

	i = 1;
	tmp = lst;
	lowest = tmp->number;
	while (tmp)
	{
		if (tmp->number < lowest)
		{
			lowest = tmp->number;
			buf = tmp;
		}
		tmp = tmp->next;
	}
	buf->index = i;
	lowest++;
	i++;
	while (times--)
	{
		tmp = lst;
		current = tmp->number;
		while(tmp)
		{
			if (tmp->number >= lowest && tmp->number <= current)
			{
				current = tmp->number;
				buf = tmp;
			}
			tmp = tmp->next;
		}
		lowest = buf->number;
		buf->index = i;
		ft_printf("lowest = %d, his buff has index = %d\n", lowest, buf->index);
		ft_printf("times = %d\n", times);
		lowest++;
		i++;
	}
/* 	while (lst)
	{
		ft_printf("value = %d\nindex = %d\n", lst->number, lst->index);
	 	lst = lst->next;
	} */
}