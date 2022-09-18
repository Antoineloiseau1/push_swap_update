/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:30:43 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/18 15:46:21 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse(char *argv[])
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	check_for_char(argv);

	while (argv[i])
	{
	 	tmp = ft_split(argv[i], ' ');
	j = 0;
	while (tmp[j])
	{
	 	ft_lstadd_back(&a, ft_lstnew(ft_atoi(tmp[j])));
		j++;
	}
		clear_split(tmp);
		i++;
	}
	check_double(a);
	if (a == NULL || a->next == NULL)
		error(-1);
	return (a);
}
