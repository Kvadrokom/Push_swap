/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:14 by skharjo           #+#    #+#             */
/*   Updated: 2021/08/06 17:42:56 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int			*arr;
	int			size;
}					t_stack;

typedef struct s_sizes
{
	int			max_num;
	int			max_bits;
	int			size;
}					t_sizes;

int		check_args(char *arr);
void	rab(t_stack *a, char ch);
void	init_stacks(char **argv, t_stack *a, t_stack *b);
void	rab(t_stack *a, char ch);
void	sa(t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	sab(t_stack *a, char ch);
void	print(t_stack a);
void	rrab(t_stack *a, char ch);
void	rrr(t_stack *a, t_stack *b);
void	pab(t_stack *a, t_stack *b, char ch);
void	quick_sort(int *numbers, int left, int right);
void	input(t_stack *a);
void	ft_sort(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
int		duplicate(t_stack a);
void	ft_light_sort(t_stack *a, t_stack *b);
int		all_sorted(t_stack *a);
void	ft_buble_sort(int *arr, int size);
void	copy(int *a, int *new, int size);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	sort_four(t_stack *a, t_stack *b);
void	replace_vol(t_stack *rp, t_stack *a);
void	sort_four(t_stack *a, t_stack *b);
int		ft_max(t_stack *a);
int		ft_min(t_stack *a);
#endif
