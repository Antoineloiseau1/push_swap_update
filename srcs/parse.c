/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:30:43 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 16:58:48 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse(char **args)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	check_for_char(args);
	while (args[i])
	{
		tmp = ft_split(args[i++], ' ');
		j = 0;
		while (tmp[j])
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(tmp[j++])));
		clear_split(tmp);
	}
	check_double(a);
	if (a->next == NULL)
		error(2, "push_swap needs at least two integers.\n");
	return (a);
}
