/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:04:16 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/20 16:04:42 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*tmp;

	tmp = *lst;
	while (tmp && tmp->next)
	{
		*lst = tmp->next;
		free(tmp);
		tmp = *lst;
	}
	if (tmp)
		free(tmp);
	lst = NULL;
	free(lst);
}
