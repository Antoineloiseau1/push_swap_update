/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:06:45 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/10 16:49:48 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ischar(char **tab)
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
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}	