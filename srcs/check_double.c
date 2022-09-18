/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:23:27 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/18 15:46:45 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_double(t_stack *lst)
{
	t_stack	*i;
	t_stack	*j;

	i = lst;
	if (i == NULL)
		return ;
	while (i != NULL && i->next != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (j->number == i->number)
				error(3);
			j = j->next;
		}
		i = i->next;
	}
}
