/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:30:43 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/10 18:46:24 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse(char **args)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (ft_ischar(args))
		error(2, "push_swap only takes positive or negative numbers\n");
	while (args[i])
	{
		tmp = ft_split(args[i++], ' ');
		j = 0;
		while (tmp[j])
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(tmp[j++])));
		ft_clear_split(tmp);
	}
	if (ft_isdouble(a))
		error(3, "duplicated numbers in arguments\n");
	else if	(ft_is_offlimits(a))
		error(4, "some number values are off limits\n");
	return (a);
}
