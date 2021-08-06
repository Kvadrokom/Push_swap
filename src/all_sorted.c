/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:12 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:17 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_strdup_int(int **arr, t_stack *a)
{
	int	i;

	i = 0;
	*arr = (int *)malloc(sizeof(int) * a->size);
	if (!*arr)
		exit(EXIT_FAILURE);
	while (i < a->size)
	{
		(*arr)[i] = a->arr[i];
		i++;
	}
}

int	all_sorted(t_stack *a)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = NULL;
	ft_strdup_int(&tmp, a);
	ft_buble_sort(tmp, a->size);
	while (i < a->size)
	{
		if (a->arr[i] != tmp[i])
		{
			free(tmp);
			return (0);
		}
		i++;
	}
	free(tmp);
	return (1);
}
