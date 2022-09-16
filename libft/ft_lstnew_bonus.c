/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:56:30 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/16 14:51:06 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int number)
{	
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->number = number;
	new->next = NULL;
	return (new);
}
