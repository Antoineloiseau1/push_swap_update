/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:44:30 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/10 18:49:30 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <errno.h>
# include <unistd.h>
# include "../ft_printf/ft_printf.h"

typedef struct 		s_stack
{
	long			number;
	struct s_stack	*next;
}					t_stack;

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
long 	ft_atoi(const char *str);
t_stack	*ft_lstnew(int number);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
char	**ft_split(const char *s, char c);
int		ft_isdigit(int c);

#endif
