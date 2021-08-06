/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:02 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:05:04 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pab(t_stack *a, t_stack *b, char ch)
{
	if (b->size > 0)
	{
		a->size++;
		a->arr[a->size - 1] = b->arr[b->size - 1];
		b->size--;
		if (ch == 'a')
			ft_putendl_fd("pa", 1);
		else if (ch == 'b')
			ft_putendl_fd("pb", 1);
	}
}
