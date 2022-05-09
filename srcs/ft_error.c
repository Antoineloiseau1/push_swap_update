/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:02:42 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/09 17:11:02 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(int err_no)
{
	if (err_no == 1)
		write(2, "error(1): push_swap takes at least one argument.\n", 50);
	return (err_no);
}