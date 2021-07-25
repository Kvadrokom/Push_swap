#include "pushswap.h"

void	rrab(t_stack *a, char ch)
{
	int i;
	int tmp;

	if (a->size > 1)
	{
		tmp = a->arr[a->size - 1];
		i = a->size - 1;
		while (i > 0)
		{
			a->arr[i] = a->arr[i - 1];
			i--;
		}
		a->arr[0] = tmp;
		if (ch == 'a')
			ft_putendl_fd("rra", 1);
		else if (ch == 'b')
			ft_putendl_fd("rrb", 1);
		else
			ft_putendl_fd("rrr", 1);
	}
}
