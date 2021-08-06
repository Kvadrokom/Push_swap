/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:38 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:41 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_max(t_stack *a)
{
	int	max;
	int	i;

	max = a->arr[0];
	i = 1;
	while (i < a->size)
	{
		if (max < a->arr[i])
			max = a->arr[i];
		i++;
	}
	return (max);
}

int	ft_min(t_stack *a)
{
	int	min;
	int	i;

	min = a->arr[0];
	i = 1;
	while (i < a->size)
	{
		if (min > a->arr[i])
			min = a->arr[i];
		i++;
	}
	return (min);
}
