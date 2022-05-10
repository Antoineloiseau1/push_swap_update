/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_offlimits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:21:49 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/10 18:09:14 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_offlimits(t_stack	*lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (lst)
	{
		if (tmp->number > INT_MAX || tmp->number < INT_MIN)
		{
			ft_lstclear(&lst);
			return (1);
		}
		lst = lst->next;
	}
	return (0);
}