/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:04:27 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/16 14:59:51 by anloisea         ###   ########.fr       */
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

// int	lst_len(t_stack *lst)
// {
// 	int	i;

// 	i = 0;
// 	while(lst)
// 	{
// 		i++;
// 		lst = lst->next;
// 	}
// 	return (i);
// }

// void	update_index(t_stack *stack)
// {
// 	int	i;

// 	i = 0;
// 	while (stack)
// 	{
// 		stack->index = i;
// 		stack = stack->next;
// 		i++;
// 	}
// }

void	error(int err_no, char *text)
{
	ft_putstr_fd("push_swap: ", 2);
	ft_putstr_fd(text, 2);
	ft_putstr_fd("\n", 2);
	exit (err_no);
}