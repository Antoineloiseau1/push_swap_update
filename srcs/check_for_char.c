/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:06:45 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/16 15:17:27 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_for_char(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_printf("%c", argv[i][j]);
			while (ft_isspace(argv[i][j]) && argv[i][j])
			{
				ft_printf("%c", argv[i][j]);
				j++;
			}
			if (!ft_isdigit(argv[i][j]) && argv[i][j])
			{
				ft_printf("%c", argv[i][j]);
				error(1, "only takes integers as argument");
			}
			j++;
		}
		i++;
	}
	ft_printf("\n");
}
