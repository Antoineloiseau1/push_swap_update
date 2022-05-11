/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:02:42 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/11 16:55:02 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int err_no, char *text)
{
	err_no += 48;
	write(2, "Error ", 7);
	write(2, &err_no, 1);
	write(2, ": ", 2);
	write(2, text, ft_strlen(text));
	exit (err_no - 48);
}
