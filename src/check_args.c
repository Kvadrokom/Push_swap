/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:04:20 by skharjo           #+#    #+#             */
/*   Updated: 2021/07/29 18:04:24 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	over_flow(char *line)
{
	int	num;
	int	tmp;

	num = 0;
	if (!ft_strcmp("-2147483648", line))
		return (0);
	if (*line == '-' || *line == '+')
		line++;
	while (*line >= '0' && *line <= '9')
	{
		tmp = num;
		num = num * 10 + (*line - 48);
		if (tmp > num)
			return (1);
		line++;
	}
	return (0);
}

static int	is_digit(char *line)
{
	int	count;

	count = 0;
	if (line[0] == '-' || line[0] == '+')
		line++;
	while (*line)
	{
		if (!ft_isdigit(*line))
			return (1);
		line++;
		count++;
	}
	if (count == 0)
		return (1);
	return (0);
}

int	duplicate(t_stack a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a.size)
	{
		j = i + 1;
		while (j < a.size)
		{
			if (a.arr[j] == a.arr[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args(char *arr)
{
	if (is_digit(arr))
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	if (over_flow(arr))
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	return (0);
}
