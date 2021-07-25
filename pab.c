#include "pushswap.h"

void	pab(t_stack *a, t_stack *b, char ch)
{
	if (b->size > 0)
	{
		a->size++;
		a->arr[a->size - 1] = b->arr[b->size - 1];
		b->size--;
		if (ch == 'a')
			ft_putendl_fd("pa", 1);
		else if (ch == 'b')
			ft_putendl_fd("pb", 1);
	}
}