/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:41 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:05:44 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sab(t_stack *a, char ch)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->arr[a->size - 1];
		a->arr[a->size - 1] = a->arr[a->size - 2];
		a->arr[a->size - 2] = tmp;
		if (ch == 'a')
			ft_putendl_fd("sa", 1);
		else if (ch == 'b')
			ft_putendl_fd("sb", 1);
		else
			ft_putendl_fd("ss", 1);
	}
}
