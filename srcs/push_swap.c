/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:19:25 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/21 12:52:06 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{	
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc < 2)
		error(-1);
	a = parse(argv);
	update_index(a);
	if (is_sorted(a))
		return (EXIT_SUCCESS);
	else if (lst_len(a) == 2 && a->number > a->next->number)
		swap_a(a);
	else if (lst_len(a) == 3)
		a = sort_three(a);
	else if (lst_len(a) <= 5)
		a = sort_five(a, b);
	else
	{
		create_place(a);
		a = radix_sort(a, b);
	}
	ft_lstclear(&a);
	return (0);
}
