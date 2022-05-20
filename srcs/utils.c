/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:04:27 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/20 15:07:57 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_split(char **split)
{
	int	i;

	i = 0;
	if (split == NULL)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int is_sorted(t_stack *a)
{
    while (a->next)
    {
        if (a->number > a->next->number)
            return (0);
        a = a->next;
    }
    return (1);
}

int	lst_len(t_stack *lst)
{
	int	i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	update_index(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}

void	error(int err_no, char *text)
{
	err_no += 48;
	write(2, "Error ", 7);
	write(2, &err_no, 1);
	write(2, ": ", 2);
	write(2, text, ft_strlen(text));
	system("leaks push_swap");
	exit (err_no - 48);
}