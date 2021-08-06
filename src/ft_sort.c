/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:45 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:47 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	init_param(t_stack *a, t_sizes *param)
{
	param->max_num = a->size - 1;
	param->max_bits = 0;
	param->size = a->size;
}

void	ft_sort(t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	t_sizes	param;

	i = 0;
	init_param(a, &param);
	while ((param.max_num >> param.max_bits) != 0)
		param.max_bits++;
	while (i < param.max_bits)
	{
		j = 0;
		while (j < param.size)
		{
			if ((a->arr[a->size - 1] >> i & 1) == 1)
				rab(a, 'a');
			else
				pab(b, a, 'b');
			j++;
		}
		while (b->size)
			pab(a, b, 'a');
		i++;
	}
}
