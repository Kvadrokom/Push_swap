#include "pushswap.h"

void	ft_sort(t_stack *a, t_stack *b)
{
	int max_num;
	int	max_bits;
	int i;
	int	j;
	int size;

	max_num = a->size - 1;
	max_bits = 0;
	i = 0;
	size = a->size;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			int x = a->arr[a->size - 1];
			if ((a->arr[a->size - 1] >> i & 1) != 1)
				rrab(a, 'a');
			else
				pab(b, a, 'b');
			j++;
		}
		while (b->size)
			pab(a, b, 'a');
		i++;
	}
}