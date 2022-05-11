/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:21:49 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 15:07:47 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_limits(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (lst)
	{
		if (tmp->number > 2147483647 && tmp->number < -2147483648)
		{
			ft_lstclear(&lst);
			error(4, "some values are off limits, please use integers.\n");
		}
		lst = lst->next;
	}
}