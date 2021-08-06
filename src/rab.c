/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:24 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:05:25 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rab(t_stack *a, char ch)
{
	int	i;
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->arr[a->size - 1];
		i = a->size - 1;
		while (i > 0)
		{
			a->arr[i] = a->arr[i - 1];
			i--;
		}
		a->arr[0] = tmp;
		if (ch == 'a')
			ft_putendl_fd("ra", 1);
		else if (ch == 'b')
			ft_putendl_fd("rb", 1);
		else if (ch == 'r')
			ft_putendl_fd("rr", 1);
	}
}
