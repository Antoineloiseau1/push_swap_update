/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:13 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 18:44:15 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_index(t_stack *lst)
{
	t_stack	*tmp;
	int		index;
	int 	lowest;
	int		len;
	t_stack	*buf;

	tmp = lst;
	index = 1;
	len = lst_len(lst);
	lowest = tmp->number;
	while (len--)
	{
		lowest = tmp->number;
		tmp = lst;
		while (tmp)
		{
			if (tmp->number < lowest)
			{
				lowest = tmp->number;
				buf = tmp;
			}
			tmp = tmp->next;
		}
		buf->index = index++;
	}
	while (lst)
	{
		ft_printf("value = %d\nindex = %d\n", lst->number, lst->index);
	 	lst = lst->next;
	}
}