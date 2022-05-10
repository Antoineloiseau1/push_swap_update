/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:23:27 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/10 17:20:02 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdouble(t_stack *lst)
{
	t_stack	*i;
	t_stack	*j;

	i = lst;
	while (i != NULL && i->next != NULL)
	{
		j = i->next;
		while (j)
		{
			if (j->number == i->number)
			{
				ft_lstclear(&lst);
				return (1);
			}
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}
