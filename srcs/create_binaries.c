/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_binaries.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:50:08 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/20 12:24:02 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_binaries(t_stack *stack)
{
	while (stack)
	{
		free(stack->binary);
		stack = stack->next;
	}
}

int	bin_size(int nb)
{
	int	i;

	i = 0;
	while (nb > 1)
	{
		nb /= 2;
		i++;
	}
	i++;
	return (i);
}

char	*itao_b(int nb)
{
	char	*bin;
	char	*result;
	int		len;

	bin = "01";
	len = bin_size(nb);
	result = malloc((len + 1) * sizeof(char));
	result[len] = 0;
	while (nb > 1)
	{
		len--;
		result[len] = bin[nb % 2];
		nb /= 2;
	}
	len--;
	result[len] = bin[nb % 2];
	return (result);
}

void	create_binaries(t_stack *stack)
{
	while (stack)
	{
		stack->binary = itao_b(stack->place);
		stack = stack->next;
	}
}

