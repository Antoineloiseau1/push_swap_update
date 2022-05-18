/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:13 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/17 11:41:18 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_index(t_stack *lst)
{
	t_stack	*i;
	t_stack *j;
	t_stack	*head;

	head = lst;
	display_lst(head, lst);
	i = head;
	//tri la liste temporaire, attribu un indice
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			if (i->number > j->number)
			{
				i->next = j->next;
				j->next = head;
				head = j;
			}
			j = j->next;
		}
		i = i->next;
	}
	display_lst(head, lst);
}