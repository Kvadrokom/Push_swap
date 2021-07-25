#include "pushswap.h"

static void	copy(int *a, int *new, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		new[i] = a[i];
		i++;
	}
}

void	input(t_stack *a)
{
	int *new;
	int i;
	int j;

	i = 0;
	new = (int *)malloc(sizeof(int) * a->size);
	if (!new)
		exit(EXIT_FAILURE);
	copy(a->arr, new, a->size);
	quick_sort(new, 0, a->size - 1);
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->arr[i] == new[j])
				a->arr[i] = j;
			j++;
		}
		i++;
	}
	free(new);
}