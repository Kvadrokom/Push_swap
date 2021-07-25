#include "pushswap.h"

void	print(t_stack a)
{
	int i;

	i = 0;
	if (a.size > 0)
	{
		while (i < a.size)
		{
			ft_putnbr_fd((a.arr)[i], 1);
			write(1, "\n", 1);
			i++;
		}
		ft_putstr_fd("\n", 1);
	}
}
