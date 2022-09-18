/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:19:25 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/18 18:49:32 by antoine          ###   ########.fr       */
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
	if (is_sorted(a))
		return (EXIT_SUCCESS);
	update_index(a);
	create_place(a);
	create_binaries(a);
	if (lst_len(a) == 2 && a->number > a->next->number)
		swap_a(a);
	else if (lst_len(a) == 3)
		a = sort_three(a);
	else if (lst_len(a) <= 5)
		a = sort_five(a, b);
/* 	pour radix sort, il suffit de convertir les ints en binaire, trouver combien de bits a le plus grand nombres puis les trier n fois le nombre de bits en pushant les 0 dans la stack b;
	recommencer pour chaque bit. */
	// else
	// 	radix_sort(a, b);
	
	// display_lst(a, b);
	free_binaries(a);
	ft_lstclear(&a);
	
	return (0);
}
