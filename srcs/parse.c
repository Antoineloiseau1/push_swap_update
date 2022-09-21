/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:30:43 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/21 13:06:24 by antoine          ###   ########.fr       */
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
	check_limits(a);
	if (a == NULL || a->next == NULL)
		error(-1);
	return (a);
}

void	check_double(t_stack *lst)
{
	t_stack	*i;
	t_stack	*j;

	i = lst;
	if (i == NULL)
		return ;
	while (i != NULL && i->next != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (j->number == i->number)
				error(4);
			j = j->next;
		}
		i = i->next;
	}
}

void	check_limits(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->number > 2147483647 || tmp->number < -2147483648)
		{
			ft_lstclear(&stack);
			error(3);
		}
		tmp = tmp->next;
	}
}

void	check_for_char(char *argv[])
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && ft_isspace(argv[i][j]))
				j++;
			if (argv[i][j] && (argv[i][j] == '-' || argv[i][j] == '+'))
			{
				if (argv[i][j + 1] == 0)
					error(1);
				j++;
			}
			if (j < ft_strlen(argv[i]) && ft_isdigit(argv[i][j]) == 0)
				error(1);
			j++;
		}
		i++;
	}
}
