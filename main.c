#include "pushswap.h"

int	main(int arc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (arc <= 1)
	{
		ft_putstr_fd("\n", 1);
		return (1);
	}
	if (check_args(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	a.size = arc - 1;
	init_stacks(argv, &a, &b);
	input(&a);
	// print(a);
	ft_sort(&a, &b);
	// print(a);
	free(a.arr);
	free(b.arr);
	return (0);
}
