/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:51 by skharjo           #+#    #+#             */
/*   Updated: 2021/08/06 17:19:44 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_three(t_stack *a)
{
	int	max;

	if (all_sorted(a))
		return ;
	if (a->size == 2)
		sab(a, 'a');
	max = ft_max(a);
	if (a->size == 3)
	{
		if (a->arr[a->size - 1] == max)
			rab(a, 'a');
		if (a->arr[a->size - 2] == max)
			rrab(a, 'a');
		if (a->arr[a->size - 1] > a->arr[a->size - 2])
			sab(a, 'a');
	}
}
