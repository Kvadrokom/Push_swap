/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:46 by skharjo           #+#    #+#             */
/*   Updated: 2021/08/06 17:20:37 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_five(t_stack *a, t_stack *b)
{
	int	min;
	int	max;

	min = ft_min(a);
	max = ft_max(a);
	while (b->size < 2)
	{
		if (a->arr[a->size - 1] == min || a->arr[a->size - 1] == max)
			pab(b, a, 'b');
		else
			rab(a, 'a');
	}
	sort_three(a);
	pab(a, b, 'a');
	pab(a, b, 'a');
	if (a->arr[a->size - 1] == max)
		rab(a, 'a');
	else
	{
		sab(a, 'a');
		rab(a, 'a');
	}
}
