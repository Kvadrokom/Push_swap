#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"
# include <stddef.h>
# include <errno.h>
# include "gnl/get_next_line.h"

typedef struct s_stack
{
	int			*arr;
	int			size;
}					t_stack;

int		check_args(char **arr);
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
#endif
