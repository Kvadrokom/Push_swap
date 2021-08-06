/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:50 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:52 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	*str_add_value(int **a, int size, int num)
{
	int	*new;
	int	i;

	new = ft_calloc(sizeof(int), (size + 1));
	i = size;
	if (!new)
		exit(EXIT_FAILURE);
	if (*a)
	{
		while (i > 0)
		{
			new[i] = (*a)[i - 1];
			i--;
		}
	}
	new[i] = num;
	free(*a);
	*a = new;
	return (*a);
}

void	init_stacks(char **argv, t_stack *a, t_stack *b)
{
	char	**split;
	char	**tmp;

	a->size = 0;
	a->arr = NULL;
	split = NULL;
	argv++;
	while (*argv)
	{
		split = ft_split(*argv, ' ');
		tmp = split;
		while (*split)
		{
			check_args(*split);
			a->arr = str_add_value(&a->arr, a->size, ft_atoi(*split));
			a->size++;
			split++;
		}
		str_array_free(&tmp);
		argv++;
	}
	b->arr = ft_calloc(sizeof(int), a->size);
	b->size = 0;
	if (!b->arr)
		exit(EXIT_FAILURE);
}
