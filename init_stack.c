#include "pushswap.h"

void	init_stacks(char **argv, t_stack *a, t_stack *b)
{
	int i;

	i = a->size;
	a->arr = malloc(sizeof(int) * a->size);
	b->arr = ft_calloc(sizeof(int), a->size);
	b->size = 0;
	if (!a->arr || !b->arr)
		exit(EXIT_FAILURE);
	while (i > 0)
	{
		(a->arr)[i - 1] = ft_atoi(argv[i]);
		i--;
	}
}