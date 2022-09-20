/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:48:55 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/20 13:17:41 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	display_lst(t_stack *a, t_stack *b)
// {
// 	t_stack	*tmp_a;
// 	t_stack	*tmp_b;

// 	tmp_a = a;
// 	tmp_b = b;
// 	ft_printf("\na || b\n");
// 	while (tmp_a || tmp_b)
// 	{
// 		if (tmp_b == NULL && tmp_a)
// 		{
// 			ft_printf("%d ||  \n", tmp_a->number);
// 			tmp_a = tmp_a->next;
// 		}
// 		else if (tmp_a == NULL && tmp_b)
// 		{
// 			ft_printf("  || %d\n", tmp_b->number);
// 			tmp_b = tmp_b->next;
// 		}
// 		else if (tmp_a && tmp_b)
// 		{
// 			ft_printf("%d || %d\n", tmp_a->number, tmp_b->number);
// 			tmp_a = tmp_a->next;
// 			tmp_b = tmp_b->next;
// 		}
// 		else
// 			return ;
// 	}
// }

void	display_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d\n", tmp->number);
		tmp = tmp->next;
	}
}
