#include "pushswap.h"

void	rab(t_stack *a, char ch)
{
	int i;
	int tmp;

	i = 0;
	tmp = (a->arr)[0];
	if (a->size > 1)
	{
		while (i < a->size - 1)
		{
			(a->arr)[i] = (a->arr)[i + 1];
			i++;
		}
		(a->arr)[a->size - 1] = tmp;
		if (ch == 'a')
			ft_putendl_fd("ra", 1);
		else if (ch == 'b')
			ft_putendl_fd("rb", 1);
		else
			ft_putendl_fd("rr", 1);
	}
}