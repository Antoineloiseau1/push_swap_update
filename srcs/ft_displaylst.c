/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displaylst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:48:55 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/09 17:42:59 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_displaylst(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = a;
	tmp_b = b;
	ft_printf("\na || b\n");
	while (tmp_a || tmp_b)
	{
		if(tmp_b == NULL && tmp_a)
		{
			ft_printf("%d ||  \n", tmp_a->number);
			tmp_a = tmp_a->next;
		}
		else if (tmp_a == NULL && tmp_b)
		{
			ft_printf("  || %d\n", tmp_b->number);
			tmp_b = tmp_b->next;
		}
		else if (tmp_a && tmp_b)
		{
			ft_printf("%d || %d\n", tmp_a->number, tmp_b->number);
			tmp_a = tmp_a->next;
			tmp_b = tmp_b->next;
		}
		else
			return ;
	}
}