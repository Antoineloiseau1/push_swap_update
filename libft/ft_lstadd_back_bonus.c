/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:38:56 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/16 13:56:04 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	tmp = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (tmp && tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
