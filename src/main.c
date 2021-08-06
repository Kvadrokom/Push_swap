/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:01 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:05 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int arc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (arc <= 1)
		return (0);
	init_stacks(argv, &a, &b);
	if (duplicate(a))
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	if (all_sorted(&a))
	{
		free(a.arr);
		free(b.arr);
		return (0);
	}
	input(&a);
	if (a.size < 6)
		ft_light_sort(&a, &b);
	else
		ft_sort(&a, &b);
	free(a.arr);
	free(b.arr);
	return (0);
}
