/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:06:45 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/18 18:17:35 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			if (j < ft_strlen(argv[i]) && ft_isdigit(argv[i][j]) == 0)
				error(1);
			j++;
		}
		i++;
	}
}
