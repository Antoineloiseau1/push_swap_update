/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:06:45 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 14:38:31 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_for_char(char **tab)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]))
				error(2, "push_swap only takes integers as argument.\n");
			j++;
		}
		i++;
	}
}	