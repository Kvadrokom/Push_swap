/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buble_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:27 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:29 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	ft_buble_sort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] < arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}
