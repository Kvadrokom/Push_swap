/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_light_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:32 by skharjo           #+#    #+#             */
/*   Updated: 2021/08/06 17:21:15 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_four(t_stack *a, t_stack *b)
{
	pab(b, a, 'b');
	sort_three(a);
	if (b->arr[0] == 2)
	{
		rab(a, 'a');
		pab(a, b, 'a');
		sab(a, 'a');
		rrab(a, 'r');
	}
	else if (b->arr[0] == 1)
	{
		pab(a, b, 'a');
		sab(a, 'a');
	}
	else if (b->arr[0] == 0)
		pab(a, b, 'a');
	else if (b->arr[0] == 3)
	{
		pab(a, b, 'a');
		rab(a, 'a');
	}
}

void	ft_light_sort(t_stack *a, t_stack *b)
{
	if (a->size <= 3)
		sort_three(a);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 5)
		sort_five(a, b);
}
