/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_binaries.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:50:08 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/20 18:29:35 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return(i);
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
		result[len - 1] = bin[nb % 2];
		nb /= 2;
		len--;
	}
	len--;
	result[len - 1] = bin[nb % 2];
	ft_printf("%s\n", result);
	return (result);
}

void	create_binaries(t_stack *stack)
{
	while (stack)
	{
		ft_printf("place  = %d\n", stack->place);
		stack->binary = itao_b(stack->place);
		stack = stack->next;
	}
}