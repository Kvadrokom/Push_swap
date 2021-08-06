/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:32 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:05:34 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rrab(t_stack *a, char ch)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = (a->arr)[0];
	if (a->size > 1)
	{
		while (i < a->size - 1)
		{
			(a->arr)[i] = (a->arr)[i + 1];
			i++;
		}
		(a->arr)[a->size - 1] = tmp;
		if (ch == 'a')
			ft_putendl_fd("rra", 1);
		else if (ch == 'b')
			ft_putendl_fd("rrb", 1);
		else if (ch == 'r')
			ft_putendl_fd("rrr", 1);
	}
}
