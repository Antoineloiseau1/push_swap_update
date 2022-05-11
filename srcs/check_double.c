/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:23:27 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 16:33:45 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_double(t_stack *lst)
{
	t_stack	*i;
	t_stack	*j;

	i = lst;
	while (i != NULL && i->next != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (j->number == i->number)
				error(3, "duplicated numbers in arguments.\n");
			j = j->next;
		}
		i = i->next;
	}
}
