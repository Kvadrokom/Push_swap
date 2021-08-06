/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:19 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:05:21 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	quick_sort_proc(int *numbers, int *left, int *right, int pivot)
{
	while (*left < *right)
	{
		while ((numbers[*right] >= pivot) && (*left < *right))
			(*right)--;
		if (*left != *right)
		{
			numbers[*left] = numbers[*right];
			(*left)++;
		}
		while ((numbers[*left] <= pivot) && (*left < *right))
			(*left)++;
		if (*left != *right)
		{
			numbers[*right] = numbers[*left];
			(*right)--;
		}
	}
}

void	quick_sort(int *numbers, int left, int right)
{
	int	pivot;
	int	l_hold;
	int	r_hold;

	pivot = numbers[left];
	l_hold = left;
	r_hold = right;
	quick_sort_proc(numbers, &left, &right, pivot);
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		quick_sort(numbers, left, pivot - 1);
	if (right > pivot)
		quick_sort(numbers, pivot + 1, right);
}
