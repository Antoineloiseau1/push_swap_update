/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:41:29 by anloisea          #+#    #+#             */
/*   Updated: 2022/09/15 14:29:43 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_read_fd(int fd)
{
	char	*file;

	file = "";
	while (file)
	{
		file = get_next_line(fd);
		ft_printf(file);
	}
}
